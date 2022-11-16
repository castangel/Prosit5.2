#include "pch.h"

namespace NS_services
{
	service_fichier::service_fichier(void)
	{
		this->dossier = gcnew NS_composants::explorateur();
	}
	void service_fichier::copier(array<String^>^ fichiersSources, String^ destination)
	{
		int i;

		i = 0;
		for (i = 0; i < fichiersSources->Length; i++)
		{
			this->dossier->copier(fichiersSources[i], destination);
		}
	}
	void service_fichier::copierEffacer(array<String^>^ fichiersSources, String^ fichierDestination)
	{
		this->copier(fichiersSources, fichierDestination);
		this->effacer(fichiersSources);
	}
	void service_fichier::effacer(array<String^>^ fichiersSources)
	{
		int i;

		i = 0;
		for (i = 0; i < fichiersSources->Length; i++)
		{
			this->dossier->effacer(fichiersSources[i]);
		}
	}
	array<String^>^ service_fichier::explorer(String^ dossier)
	{
		return this->dossier->explorerUnDossier(dossier);
	}
}
