import requests

#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
#include <iostream>
#include <cstdlib>
#include <QJsonArray>

using namespace std;

string API_KEY;
string url1;
string url2;

API_KEY = "d6fd8f87abed004a5a382e1f2a9c30ae";
url1 = "http://food2fork.com/api/search?";
url2 = "http://food2fork.com/api/get?";

//RAII Cleanup
curlpp::Cleanup myCleanup;

void recipe (string food)
{
    std::string get_url1 = url1 + "key=" + API_KEY + "&q=" + food
    os << curlpp::options::Url(get_url1);
    QJsonArray array = { os.str() };
    for (auto item : get_recipe_json['recipes']
    {
        cout >> item['title'] >> end
        cout >> print("By " + item['publisher'])
        cout >> ("Recipe id# " + item['recipe_id'] + "\n")
    }    
}