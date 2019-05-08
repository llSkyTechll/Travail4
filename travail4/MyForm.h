#pragma once
#include "Donnees.h"
#include <stdlib.h>
#include <time.h>

namespace travail4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const int maxCartes = 10;
	Donnees leJeu;
	Carte carteChanceuse;
	int valeurChanceuse;
	string atoutChanceux;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBoxJ1;
	protected:
	private: System::Windows::Forms::ListBox^  listBoxJ2;
	private: System::Windows::Forms::ListBox^  listBoxJ3;
	private: System::Windows::Forms::ListBox^  listBoxJ4;
	private: System::Windows::Forms::Label^  labelJ1;

	private: System::Windows::Forms::Label^  ptsJ1;
	private: System::Windows::Forms::Label^  ptsJ2;
	private: System::Windows::Forms::Label^  labelJ2;

	private: System::Windows::Forms::Label^  ptsJ3;
	private: System::Windows::Forms::Label^  labelJ3;

	private: System::Windows::Forms::Label^  ptsJ4;
	private: System::Windows::Forms::Label^  labelJ4;

	private: System::Windows::Forms::Button^  btnDistribuer;
	private: System::Windows::Forms::TextBox^  txtValeurJ1;
	private: System::Windows::Forms::TextBox^  txtValeurJ2;
	private: System::Windows::Forms::TextBox^  txtValeurJ3;
	private: System::Windows::Forms::TextBox^  txtValeurJ4;
	private: System::Windows::Forms::Label^  labelMessage;


	private: System::Windows::Forms::Button^  btnPareil;
	private: System::Windows::Forms::Button^  btnChanceux;
	private: System::Windows::Forms::Button^  btnTotal;


	private: System::Windows::Forms::Label^  labelCarteChanceuse;
	private: System::Windows::Forms::Label^  labelValeurChanceuse;
	private: System::Windows::Forms::Button^  btnValeurChanseuce;
	private: System::Windows::Forms::Button^  btnGrandeValeur;

	private: System::Windows::Forms::Label^  labelJoueurEnAvance;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  labelAtoutChanceux;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		List<ListBox^>^ lesListes;
		List<TextBox^>^ lesPoints;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBoxJ1 = (gcnew System::Windows::Forms::ListBox());
			this->listBoxJ2 = (gcnew System::Windows::Forms::ListBox());
			this->listBoxJ3 = (gcnew System::Windows::Forms::ListBox());
			this->listBoxJ4 = (gcnew System::Windows::Forms::ListBox());
			this->labelJ1 = (gcnew System::Windows::Forms::Label());
			this->ptsJ1 = (gcnew System::Windows::Forms::Label());
			this->ptsJ2 = (gcnew System::Windows::Forms::Label());
			this->labelJ2 = (gcnew System::Windows::Forms::Label());
			this->ptsJ3 = (gcnew System::Windows::Forms::Label());
			this->labelJ3 = (gcnew System::Windows::Forms::Label());
			this->ptsJ4 = (gcnew System::Windows::Forms::Label());
			this->labelJ4 = (gcnew System::Windows::Forms::Label());
			this->btnDistribuer = (gcnew System::Windows::Forms::Button());
			this->txtValeurJ1 = (gcnew System::Windows::Forms::TextBox());
			this->txtValeurJ2 = (gcnew System::Windows::Forms::TextBox());
			this->txtValeurJ3 = (gcnew System::Windows::Forms::TextBox());
			this->txtValeurJ4 = (gcnew System::Windows::Forms::TextBox());
			this->labelMessage = (gcnew System::Windows::Forms::Label());
			this->btnPareil = (gcnew System::Windows::Forms::Button());
			this->btnChanceux = (gcnew System::Windows::Forms::Button());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->labelCarteChanceuse = (gcnew System::Windows::Forms::Label());
			this->labelValeurChanceuse = (gcnew System::Windows::Forms::Label());
			this->btnValeurChanseuce = (gcnew System::Windows::Forms::Button());
			this->btnGrandeValeur = (gcnew System::Windows::Forms::Button());
			this->labelJoueurEnAvance = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelAtoutChanceux = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBoxJ1
			// 
			this->listBoxJ1->FormattingEnabled = true;
			this->listBoxJ1->Location = System::Drawing::Point(21, 30);
			this->listBoxJ1->Name = L"listBoxJ1";
			this->listBoxJ1->Size = System::Drawing::Size(120, 134);
			this->listBoxJ1->TabIndex = 0;
			// 
			// listBoxJ2
			// 
			this->listBoxJ2->FormattingEnabled = true;
			this->listBoxJ2->Location = System::Drawing::Point(156, 30);
			this->listBoxJ2->Name = L"listBoxJ2";
			this->listBoxJ2->Size = System::Drawing::Size(120, 134);
			this->listBoxJ2->TabIndex = 1;
			// 
			// listBoxJ3
			// 
			this->listBoxJ3->FormattingEnabled = true;
			this->listBoxJ3->Location = System::Drawing::Point(301, 30);
			this->listBoxJ3->Name = L"listBoxJ3";
			this->listBoxJ3->Size = System::Drawing::Size(120, 134);
			this->listBoxJ3->TabIndex = 2;
			// 
			// listBoxJ4
			// 
			this->listBoxJ4->FormattingEnabled = true;
			this->listBoxJ4->Location = System::Drawing::Point(441, 30);
			this->listBoxJ4->Name = L"listBoxJ4";
			this->listBoxJ4->Size = System::Drawing::Size(120, 134);
			this->listBoxJ4->TabIndex = 3;
			// 
			// labelJ1
			// 
			this->labelJ1->AutoSize = true;
			this->labelJ1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelJ1->Location = System::Drawing::Point(21, 11);
			this->labelJ1->Name = L"labelJ1";
			this->labelJ1->Size = System::Drawing::Size(56, 13);
			this->labelJ1->TabIndex = 4;
			this->labelJ1->Text = L"Joueur1:";
			// 
			// ptsJ1
			// 
			this->ptsJ1->AutoSize = true;
			this->ptsJ1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ptsJ1->Location = System::Drawing::Point(92, 6);
			this->ptsJ1->Name = L"ptsJ1";
			this->ptsJ1->Size = System::Drawing::Size(19, 20);
			this->ptsJ1->TabIndex = 5;
			this->ptsJ1->Text = L"0";
			// 
			// ptsJ2
			// 
			this->ptsJ2->AutoSize = true;
			this->ptsJ2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ptsJ2->Location = System::Drawing::Point(232, 6);
			this->ptsJ2->Name = L"ptsJ2";
			this->ptsJ2->Size = System::Drawing::Size(19, 20);
			this->ptsJ2->TabIndex = 7;
			this->ptsJ2->Text = L"0";
			// 
			// labelJ2
			// 
			this->labelJ2->AutoSize = true;
			this->labelJ2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelJ2->Location = System::Drawing::Point(153, 11);
			this->labelJ2->Name = L"labelJ2";
			this->labelJ2->Size = System::Drawing::Size(56, 13);
			this->labelJ2->TabIndex = 6;
			this->labelJ2->Text = L"Joueur2:";
			// 
			// ptsJ3
			// 
			this->ptsJ3->AutoSize = true;
			this->ptsJ3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ptsJ3->Location = System::Drawing::Point(378, 6);
			this->ptsJ3->Name = L"ptsJ3";
			this->ptsJ3->Size = System::Drawing::Size(19, 20);
			this->ptsJ3->TabIndex = 9;
			this->ptsJ3->Text = L"0";
			// 
			// labelJ3
			// 
			this->labelJ3->AutoSize = true;
			this->labelJ3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelJ3->Location = System::Drawing::Point(298, 11);
			this->labelJ3->Name = L"labelJ3";
			this->labelJ3->Size = System::Drawing::Size(56, 13);
			this->labelJ3->TabIndex = 8;
			this->labelJ3->Text = L"Joueur3:";
			// 
			// ptsJ4
			// 
			this->ptsJ4->AutoSize = true;
			this->ptsJ4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ptsJ4->Location = System::Drawing::Point(519, 6);
			this->ptsJ4->Name = L"ptsJ4";
			this->ptsJ4->Size = System::Drawing::Size(19, 20);
			this->ptsJ4->TabIndex = 11;
			this->ptsJ4->Text = L"0";
			// 
			// labelJ4
			// 
			this->labelJ4->AutoSize = true;
			this->labelJ4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelJ4->Location = System::Drawing::Point(438, 9);
			this->labelJ4->Name = L"labelJ4";
			this->labelJ4->Size = System::Drawing::Size(56, 13);
			this->labelJ4->TabIndex = 10;
			this->labelJ4->Text = L"Joueur4:";
			// 
			// btnDistribuer
			// 
			this->btnDistribuer->Location = System::Drawing::Point(590, 132);
			this->btnDistribuer->Name = L"btnDistribuer";
			this->btnDistribuer->Size = System::Drawing::Size(155, 32);
			this->btnDistribuer->TabIndex = 12;
			this->btnDistribuer->Text = L"Distribuer des cartes";
			this->btnDistribuer->UseVisualStyleBackColor = true;
			this->btnDistribuer->Click += gcnew System::EventHandler(this, &MyForm::btnDistribuer_Click);
			// 
			// txtValeurJ1
			// 
			this->txtValeurJ1->Location = System::Drawing::Point(24, 206);
			this->txtValeurJ1->Name = L"txtValeurJ1";
			this->txtValeurJ1->Size = System::Drawing::Size(117, 20);
			this->txtValeurJ1->TabIndex = 13;
			// 
			// txtValeurJ2
			// 
			this->txtValeurJ2->Location = System::Drawing::Point(156, 206);
			this->txtValeurJ2->Name = L"txtValeurJ2";
			this->txtValeurJ2->Size = System::Drawing::Size(120, 20);
			this->txtValeurJ2->TabIndex = 14;
			// 
			// txtValeurJ3
			// 
			this->txtValeurJ3->Location = System::Drawing::Point(301, 206);
			this->txtValeurJ3->Name = L"txtValeurJ3";
			this->txtValeurJ3->Size = System::Drawing::Size(120, 20);
			this->txtValeurJ3->TabIndex = 15;
			// 
			// txtValeurJ4
			// 
			this->txtValeurJ4->Location = System::Drawing::Point(441, 206);
			this->txtValeurJ4->Name = L"txtValeurJ4";
			this->txtValeurJ4->Size = System::Drawing::Size(120, 20);
			this->txtValeurJ4->TabIndex = 16;
			// 
			// labelMessage
			// 
			this->labelMessage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMessage->Location = System::Drawing::Point(20, 247);
			this->labelMessage->Name = L"labelMessage";
			this->labelMessage->Size = System::Drawing::Size(541, 73);
			this->labelMessage->TabIndex = 17;
			this->labelMessage->Text = L"message";
			this->labelMessage->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnPareil
			// 
			this->btnPareil->Location = System::Drawing::Point(590, 211);
			this->btnPareil->Name = L"btnPareil";
			this->btnPareil->Size = System::Drawing::Size(155, 32);
			this->btnPareil->TabIndex = 19;
			this->btnPareil->Text = L"Cartes pareilles";
			this->btnPareil->UseVisualStyleBackColor = true;
			this->btnPareil->Click += gcnew System::EventHandler(this, &MyForm::btnPareil_Click);
			// 
			// btnChanceux
			// 
			this->btnChanceux->Location = System::Drawing::Point(590, 249);
			this->btnChanceux->Name = L"btnChanceux";
			this->btnChanceux->Size = System::Drawing::Size(155, 29);
			this->btnChanceux->TabIndex = 20;
			this->btnChanceux->Text = L"Carte Chanceuse";
			this->btnChanceux->UseVisualStyleBackColor = true;
			this->btnChanceux->Click += gcnew System::EventHandler(this, &MyForm::btnChanceux_Click);
			// 
			// btnTotal
			// 
			this->btnTotal->Location = System::Drawing::Point(590, 170);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(155, 32);
			this->btnTotal->TabIndex = 21;
			this->btnTotal->Text = L"Total des cartes";
			this->btnTotal->UseVisualStyleBackColor = true;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::btnTotal_Click);
			// 
			// labelCarteChanceuse
			// 
			this->labelCarteChanceuse->AutoSize = true;
			this->labelCarteChanceuse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCarteChanceuse->Location = System::Drawing::Point(706, 44);
			this->labelCarteChanceuse->Name = L"labelCarteChanceuse";
			this->labelCarteChanceuse->Size = System::Drawing::Size(14, 13);
			this->labelCarteChanceuse->TabIndex = 24;
			this->labelCarteChanceuse->Text = L"0";
			// 
			// labelValeurChanceuse
			// 
			this->labelValeurChanceuse->AutoSize = true;
			this->labelValeurChanceuse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelValeurChanceuse->Location = System::Drawing::Point(705, 75);
			this->labelValeurChanceuse->Name = L"labelValeurChanceuse";
			this->labelValeurChanceuse->Size = System::Drawing::Size(14, 13);
			this->labelValeurChanceuse->TabIndex = 25;
			this->labelValeurChanceuse->Text = L"0";
			// 
			// btnValeurChanseuce
			// 
			this->btnValeurChanseuce->Location = System::Drawing::Point(590, 284);
			this->btnValeurChanseuce->Name = L"btnValeurChanseuce";
			this->btnValeurChanseuce->Size = System::Drawing::Size(155, 33);
			this->btnValeurChanseuce->TabIndex = 26;
			this->btnValeurChanseuce->Text = L"Valeurs Chanceuses";
			this->btnValeurChanseuce->UseVisualStyleBackColor = true;
			this->btnValeurChanseuce->Click += gcnew System::EventHandler(this, &MyForm::btnValeurChanseuce_Click);
			// 
			// btnGrandeValeur
			// 
			this->btnGrandeValeur->Location = System::Drawing::Point(590, 323);
			this->btnGrandeValeur->Name = L"btnGrandeValeur";
			this->btnGrandeValeur->Size = System::Drawing::Size(155, 32);
			this->btnGrandeValeur->TabIndex = 27;
			this->btnGrandeValeur->Text = L"Grandes Valeurs";
			this->btnGrandeValeur->UseVisualStyleBackColor = true;
			this->btnGrandeValeur->Click += gcnew System::EventHandler(this, &MyForm::btnGrandeValeur_Click);
			// 
			// labelJoueurEnAvance
			// 
			this->labelJoueurEnAvance->AutoSize = true;
			this->labelJoueurEnAvance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelJoueurEnAvance->Location = System::Drawing::Point(494, 178);
			this->labelJoueurEnAvance->Name = L"labelJoueurEnAvance";
			this->labelJoueurEnAvance->Size = System::Drawing::Size(67, 13);
			this->labelJoueurEnAvance->TabIndex = 28;
			this->labelJoueurEnAvance->Text = L"en avance";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(597, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"carte chanceuse:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(597, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"valeur chanceuse:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(376, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Joueur en avance:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Points Obtenus";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(597, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 36;
			this->label6->Text = L"atout chanceux:";
			// 
			// labelAtoutChanceux
			// 
			this->labelAtoutChanceux->AutoSize = true;
			this->labelAtoutChanceux->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAtoutChanceux->Location = System::Drawing::Point(705, 102);
			this->labelAtoutChanceux->Name = L"labelAtoutChanceux";
			this->labelAtoutChanceux->Size = System::Drawing::Size(14, 13);
			this->labelAtoutChanceux->TabIndex = 35;
			this->labelAtoutChanceux->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 377);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->labelAtoutChanceux);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelJoueurEnAvance);
			this->Controls->Add(this->btnGrandeValeur);
			this->Controls->Add(this->btnValeurChanseuce);
			this->Controls->Add(this->labelValeurChanceuse);
			this->Controls->Add(this->labelCarteChanceuse);
			this->Controls->Add(this->btnTotal);
			this->Controls->Add(this->btnChanceux);
			this->Controls->Add(this->btnPareil);
			this->Controls->Add(this->labelMessage);
			this->Controls->Add(this->txtValeurJ4);
			this->Controls->Add(this->txtValeurJ3);
			this->Controls->Add(this->txtValeurJ2);
			this->Controls->Add(this->txtValeurJ1);
			this->Controls->Add(this->btnDistribuer);
			this->Controls->Add(this->ptsJ4);
			this->Controls->Add(this->labelJ4);
			this->Controls->Add(this->ptsJ3);
			this->Controls->Add(this->labelJ3);
			this->Controls->Add(this->ptsJ2);
			this->Controls->Add(this->labelJ2);
			this->Controls->Add(this->ptsJ1);
			this->Controls->Add(this->labelJ1);
			this->Controls->Add(this->listBoxJ4);
			this->Controls->Add(this->listBoxJ3);
			this->Controls->Add(this->listBoxJ2);
			this->Controls->Add(this->listBoxJ1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	srand((unsigned)time(NULL));
	AjouterLesListBox();
	AfficherJoueurs();
}

	private: System::Void btnDistribuer_Click(System::Object^  sender, System::EventArgs^  e) {
		viderListes();
		for (int cptJoueur = 0; cptJoueur < 4; cptJoueur++)
		{
			for (int cptCarte = 0; cptCarte < maxCartes; cptCarte++)
			{
				leJeu.lesJoueurs[cptJoueur].assignerCarte(GenererCarte());
			}
		}
		TrierCartes();
		AfficherLesCartes();
		carteChanceuse = GenererCarte();
		labelCarteChanceuse->Text = gcnew String(carteChanceuse.ToString().c_str());
		valeurChanceuse = rand() % 13 + 1;
		labelValeurChanceuse->Text = valeurChanceuse.ToString();
		atoutChanceux = GenererAtout();
		labelAtoutChanceux->Text = gcnew String(atoutChanceux.c_str());
		EffacerPointsObtenus();
		RendreBoutonEnabled();
	}

	Carte GenererCarte()
	{
		int valeur = rand() % 13 + 1;
		string atout = GenererAtout();
		Carte laCarte(valeur, atout);
		return laCarte;
	}
	string GenererAtout()
	{
		string atout = "";
		int nombreAtout = rand() % 4;
		switch (nombreAtout)
		{
		case 0: atout = "pique";
			break;
		case 1: atout = "coeur";
			break;
		case 2: atout = "trèfle";
			break;
		case 3: atout = "carreau";
			break;
		}
		return atout;
	}

private: System::Void btnTotal_Click(System::Object^  sender, System::EventArgs^  e) {

	labelMessage->Text = "Chaque personne reçoit un nombre de points égal à la somme de ses cartes";
	int valeur = 0;
	for (int cptJoueur = 0; cptJoueur < 4; cptJoueur++)
	{
		valeur = leJeu.lesJoueurs[cptJoueur].calculerValeurTotal();
		leJeu.lesJoueurs[cptJoueur].ajouterPoints(valeur);
		AfficherValeur(cptJoueur, valeur);
	}
	AfficherPoints();
	btnTotal->Enabled = false;
}

private: System::Void btnPareil_Click(System::Object^  sender, System::EventArgs^  e) {
	labelMessage->Text = "Vous obtenez 50 points pour 4 cartes pareilles ou plus\n ";
	labelMessage->Text += "ou 10 points pour 3 cartes pareilles\n ";
	labelMessage->Text += "ou 5 points pour 2 cartes pareilles\n ";
	for (int cptJoueur = 0; cptJoueur < 4; cptJoueur++)
	{
		leJeu.lesJoueurs[cptJoueur].ajouterPointsDuplique();
	}
	AfficherPoints();
	btnPareil->Enabled = false;
}

private: System::Void btnChanceux_Click(System::Object^  sender, System::EventArgs^  e) {

	labelMessage->Text = "Tous ceux qui ont la carte chanceuse obtiennent 25 points";
	AfficherPoints();
	btnChanceux->Enabled = false;
}

private: System::Void btnValeurChanseuce_Click(System::Object^  sender, System::EventArgs^  e) {

	string message = "Tous ceux qui ont une carte possédant la valeur chanceuse obtiennent cette valeur\n";
	message += "ainsi que 5 points de plus pour tous ceux qui ont des cartes de l'atout chanceux";
	labelMessage->Text = gcnew String(message.c_str());
	AfficherPoints();
	btnValeurChanseuce->Enabled = false;
}

private: System::Void btnGrandeValeur_Click(System::Object^  sender, System::EventArgs^  e) {

	labelMessage->Text = "Tous ceux qui ont au moins 5 cartes > 10 obtiennent 50 points ";
	AfficherPoints();
	btnGrandeValeur->Enabled = false;
}

	//-----------------------------------------------------------------------------------------
	//fonctions servant à l'affichage
	void AjouterLesListBox()
	{
		lesListes = gcnew List<ListBox^>();
		lesListes->Add(listBoxJ1);
		lesListes->Add(listBoxJ2);
		lesListes->Add(listBoxJ3);
		lesListes->Add(listBoxJ4);
		lesPoints = gcnew List<TextBox^>();
		lesPoints->Add(txtValeurJ1);
		lesPoints->Add(txtValeurJ2);
		lesPoints->Add(txtValeurJ3);
		lesPoints->Add(txtValeurJ4);
	}

	void RendreBoutonEnabled()
	{
		btnChanceux->Enabled = true;
		btnGrandeValeur->Enabled = true;
		btnPareil->Enabled = true;
		btnTotal->Enabled = true;
		btnValeurChanseuce->Enabled = true;
	}

	void AfficherJoueurs()
	{
		labelJ1->Text = gcnew String(leJeu.lesJoueurs[0].getNom().c_str());
		labelJ2->Text = gcnew String(leJeu.lesJoueurs[1].getNom().c_str());
		labelJ3->Text = gcnew String(leJeu.lesJoueurs[2].getNom().c_str());
		labelJ4->Text = gcnew String(leJeu.lesJoueurs[3].getNom().c_str());
	}

	void AfficherLesCartes()
	{
		for (int cptJoueur = 0; cptJoueur < 4; cptJoueur++)
		{
			for (int cptCarte = 0; cptCarte < maxCartes; cptCarte++)
			{
				lesListes[cptJoueur]->Items->Add(gcnew String(leJeu.lesJoueurs[cptJoueur].getLesCartesDuJoueur().at(cptCarte).ToString().c_str()));
			}
		}
	}

	void AfficherPoints()
	{
		ptsJ1->Text = leJeu.lesJoueurs[0].getPoints().ToString();
		ptsJ2->Text = leJeu.lesJoueurs[1].getPoints().ToString();
		ptsJ3->Text = leJeu.lesJoueurs[2].getPoints().ToString();
		ptsJ4->Text = leJeu.lesJoueurs[3].getPoints().ToString();
	}

	void EffacerPointsObtenus()
	{
		txtValeurJ1->Text = "0";
		txtValeurJ2->Text = "0";
		txtValeurJ3->Text = "0";
		txtValeurJ4->Text = "0";
		labelMessage->Text = "";
	}

	void AfficherValeur(int inJoueur, int inValeur)
	{
		lesPoints[inJoueur]->Text = inValeur.ToString();
	}

	void TrierCartes()
	{
		for (int cptJoueur = 0; cptJoueur < 4; cptJoueur++)
		{
			leJeu.lesJoueurs[cptJoueur].trie();
		}
	}

	void viderListes()
	{
		for (int cpt = 0; cpt < 4; cpt++)
		{
			lesListes[cpt]->Items->Clear();
		}
	}
};	

}
