#include "pch.h"
//CLexplorateur.cpp
#include "explorateur.h"

namespace NS_composants
{
	array<String^>^ explorateur::explorerUnDossier(String^ dossier)
	{
			return System::IO::Directory::GetFiles(dossier);
	}
	void explorateur::effacer(String^ fichier)
	{
		System::IO::File::Delete(fichier);
	}
	void explorateur::copier(String^ fichierSource, String^ fichierDestination)
	{
		String^ nomDeFichierExtension;
		nomDeFichierExtension = System::IO::Path::GetFileName(fichierSource);
		System::IO::File::Copy(fichierSource, fichierDestination + "\\" + nomDeFichierExtension);
	}
}
