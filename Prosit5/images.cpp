#include "pch.h"
#include "images.h"
using namespace System;

namespace NS_composants
{
	System::Drawing::Bitmap^ images::acquisitionImage(String^ fichier)
	{
		return gcnew System::Drawing::Bitmap(fichier);
	}
}
