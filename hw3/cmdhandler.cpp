#include "cmdhandler.h"
#include "util.h"
using namespace std;

QuitHandler::QuitHandler()
{

}

QuitHandler::QuitHandler(Handler* next)
  : Handler(next)
{

}

bool QuitHandler::canHandle(const std::string& cmd) const
{
	return cmd == "QUIT";

}

bool AndHandler::canHandle(const std::string& cmd) const
{
	return cmd == "AND";
}

bool OrHandler::canHandle(const std::string& cmd) const
{
	return cmd == "OR";
}

Handler::HANDLER_STATUS_T QuitHandler::process(TwitEng* eng, std::istream& instr) const
{
	eng->dumpFeeds();
	return HANDLER_QUIT;
}