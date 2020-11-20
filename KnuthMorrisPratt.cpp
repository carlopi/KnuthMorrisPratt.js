#include "cheerp/clientlib.h"
#include <string>
#include <boost/algorithm/searching/knuth_morris_pratt.hpp>

bool isThereAMatch(const std::string& word, const std::string& sentence)
{
    auto searcher = boost::algorithm::make_knuth_morris_pratt(word);
    auto wordPosition = searcher(sentence);

    return (wordPosition.first != end(sentence));
}

[[cheerp::genericjs]] std::string buildString(client::Uint8Array& array)
{
	std::string res = "";
	for (uint32_t i = 0; i<array.get_length(); i++)
		res.push_back(array[i]);
	return res;
}


[[cheerp::jsexport]][[cheerp::genericjs]] client::String* isThereAMatch(client::Uint8Array* needle, client::Uint8Array* haystack)
{
	const std::string needleString = buildString(*needle);
	const std::string haystackString = buildString(*haystack);

	if (isThereAMatch(needleString, haystackString))
		return new client::String("Present");
	else
		return new client::String("Absent");
}
