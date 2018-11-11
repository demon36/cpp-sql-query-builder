#include "DBReflectionHelper.h"

using namespace DB;
using namespace std;

int main(){
	try{
		std::vector<Row> results = Select::factory("client_info").where("age", "<", "84").get();
		for(auto& row : results){
			for(auto& field : row){
				cout<<field.first<<"="<<field.second<<endl;
			}
			cout<<"-----------"<<endl;
		}
	}catch(Poco::Exception& ex){
		std::cerr<<ex.message()<<std::endl;
	}
}
