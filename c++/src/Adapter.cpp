#include "Adapter.hpp"

std::string Adapter::sendHdmiSignal ()
{
	std::string dviOutput = sendDviSignal ();
	std::string convertedSignal = dviOutput + "-> converted into HDMI";
	return convertedSignal;
}

