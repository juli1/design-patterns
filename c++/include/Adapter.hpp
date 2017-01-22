#include "model/HDMI.hpp"
#include "model/DVI.hpp"

class Adapter : public HDMI, private DVI
{
	public:
		std::string sendHdmiSignal ();
};

