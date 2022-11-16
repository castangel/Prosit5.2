#pragma once
#include "pch.h"

namespace NS_services
{
	ref class service_image
	{
	private:
		NS_composants::images^ image;
	public:
		service_image(void);
		System::Drawing::Bitmap^ lireImage(String^);

	};
}

