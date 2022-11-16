#pragma once
#include "pch.h"

using namespace System;

namespace NS_services
{

	ref class service_fichier
	{
	private:
		NS_composants::explorateur^ dossier;

	public:
		service_fichier(void);
		void copier(array<String^>^, String^);
		void copierEffacer(array<String^>^, String^);
		void effacer(array<String^>^);
		cli::array<System::String^>^ explorer(String^);

	};
}

