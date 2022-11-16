#include "pch.h"
#include "service_image.h"

namespace NS_services
{
	service_image::service_image(void)
	{
		this->image = gcnew NS_composants::images();
	}
	System::Drawing::Bitmap^ service_image::lireImage(String^ image)
	{
		return this->image->acquisitionImage(image);
	}

}
