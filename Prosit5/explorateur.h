#pragma once

using namespace System::IO;
using namespace System;

namespace NS_composants
{

	ref class explorateur
	{
	public:
		array<String^>^ explorerUnDossier(String^);
		void effacer(String^);
		void copier(String^, String^);

	};
}

