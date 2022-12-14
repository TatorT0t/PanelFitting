void Compare_positions_gel()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Jul 22 14:11:40 2021) by ROOT version 6.24/02
   TCanvas *c1 = new TCanvas("c1", "c1",681,208,700,527);
   c1->Range(-61875.01,-1667.138,306875,15004.24);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *htemp__1 = new TH1F("htemp__1","Pulse Area at (0,5) and (6,4): No Gel",100,-25000,270000);
   htemp__1->SetBinContent(9,2286);
   htemp__1->SetBinContent(10,12702);
   htemp__1->SetBinContent(11,6030);
   htemp__1->SetBinContent(12,3756);
   htemp__1->SetBinContent(13,3081);
   htemp__1->SetBinContent(14,2448);
   htemp__1->SetBinContent(15,2007);
   htemp__1->SetBinContent(16,1812);
   htemp__1->SetBinContent(17,1782);
   htemp__1->SetBinContent(18,1827);
   htemp__1->SetBinContent(19,1653);
   htemp__1->SetBinContent(20,1494);
   htemp__1->SetBinContent(21,1491);
   htemp__1->SetBinContent(22,1491);
   htemp__1->SetBinContent(23,1599);
   htemp__1->SetBinContent(24,1665);
   htemp__1->SetBinContent(25,1458);
   htemp__1->SetBinContent(26,1548);
   htemp__1->SetBinContent(27,1431);
   htemp__1->SetBinContent(28,1335);
   htemp__1->SetBinContent(29,1155);
   htemp__1->SetBinContent(30,1083);
   htemp__1->SetBinContent(31,747);
   htemp__1->SetBinContent(32,579);
   htemp__1->SetBinContent(33,468);
   htemp__1->SetBinContent(34,363);
   htemp__1->SetBinContent(35,321);
   htemp__1->SetBinContent(36,291);
   htemp__1->SetBinContent(37,225);
   htemp__1->SetBinContent(38,177);
   htemp__1->SetBinContent(39,177);
   htemp__1->SetBinContent(40,141);
   htemp__1->SetBinContent(41,174);
   htemp__1->SetBinContent(42,150);
   htemp__1->SetBinContent(43,177);
   htemp__1->SetBinContent(44,138);
   htemp__1->SetBinContent(45,102);
   htemp__1->SetBinContent(46,84);
   htemp__1->SetBinContent(47,93);
   htemp__1->SetBinContent(48,57);
   htemp__1->SetBinContent(49,51);
   htemp__1->SetBinContent(50,39);
   htemp__1->SetBinContent(51,27);
   htemp__1->SetBinContent(52,33);
   htemp__1->SetBinContent(53,30);
   htemp__1->SetBinContent(54,12);
   htemp__1->SetBinContent(55,24);
   htemp__1->SetBinContent(56,21);
   htemp__1->SetBinContent(57,18);
   htemp__1->SetBinContent(58,12);
   htemp__1->SetBinContent(59,6);
   htemp__1->SetBinContent(60,15);
   htemp__1->SetBinContent(61,9);
   htemp__1->SetBinContent(63,3);
   htemp__1->SetBinContent(65,6);
   htemp__1->SetBinContent(66,6);
   htemp__1->SetBinContent(67,15);
   htemp__1->SetBinContent(68,9);
   htemp__1->SetBinContent(69,9);
   htemp__1->SetBinContent(72,3);
   htemp__1->SetBinContent(74,3);
   htemp__1->SetBinContent(75,3);
   htemp__1->SetBinContent(76,3);
   htemp__1->SetBinContent(77,3);
   htemp__1->SetBinContent(78,9);
   htemp__1->SetBinContent(79,6);
   htemp__1->SetBinContent(80,6);
   htemp__1->SetBinContent(81,3);
   htemp__1->SetBinContent(82,9);
   htemp__1->SetBinContent(83,3);
   htemp__1->SetBinContent(84,3);
   htemp__1->SetBinContent(93,3);
   htemp__1->SetEntries(60000);
   htemp__1->SetDirectory(0);
   
   /*
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("htemp");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 60000  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 2.567e+04");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 2.616e+04");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   htemp__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(htemp__1);
   */

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   htemp__1->SetLineColor(ci);
   htemp__1->GetXaxis()->SetTitle("Line 112");
   htemp__1->GetXaxis()->SetRange(1,100);
   htemp__1->GetXaxis()->SetLabelFont(42);
   htemp__1->GetXaxis()->SetTitleOffset(1);
   htemp__1->GetXaxis()->SetTitleFont(42);
   htemp__1->GetYaxis()->SetLabelFont(42);
   htemp__1->GetYaxis()->SetTitleFont(42);
   htemp__1->GetZaxis()->SetLabelFont(42);
   htemp__1->GetZaxis()->SetTitleOffset(1);
   htemp__1->GetZaxis()->SetTitleFont(42);
   htemp__1->Draw("hist");
   
   TH1F *htemp__2 = new TH1F("htemp__2","",100,-25000,270000);
   htemp__2->SetBinContent(9,2337);
   htemp__2->SetBinContent(10,14175);
   htemp__2->SetBinContent(11,6570);
   htemp__2->SetBinContent(12,4548);
   htemp__2->SetBinContent(13,3903);
   htemp__2->SetBinContent(14,3363);
   htemp__2->SetBinContent(15,3219);
   htemp__2->SetBinContent(16,3378);
   htemp__2->SetBinContent(17,3168);
   htemp__2->SetBinContent(18,2883);
   htemp__2->SetBinContent(19,2550);
   htemp__2->SetBinContent(20,1989);
   htemp__2->SetBinContent(21,1602);
   htemp__2->SetBinContent(22,1239);
   htemp__2->SetBinContent(23,870);
   htemp__2->SetBinContent(24,762);
   htemp__2->SetBinContent(25,579);
   htemp__2->SetBinContent(26,465);
   htemp__2->SetBinContent(27,378);
   htemp__2->SetBinContent(28,342);
   htemp__2->SetBinContent(29,282);
   htemp__2->SetBinContent(30,249);
   htemp__2->SetBinContent(31,219);
   htemp__2->SetBinContent(32,132);
   htemp__2->SetBinContent(33,99);
   htemp__2->SetBinContent(34,81);
   htemp__2->SetBinContent(35,63);
   htemp__2->SetBinContent(36,48);
   htemp__2->SetBinContent(37,24);
   htemp__2->SetBinContent(38,48);
   htemp__2->SetBinContent(39,24);
   htemp__2->SetBinContent(40,21);
   htemp__2->SetBinContent(41,36);
   htemp__2->SetBinContent(42,24);
   htemp__2->SetBinContent(43,15);
   htemp__2->SetBinContent(44,15);
   htemp__2->SetBinContent(45,12);
   htemp__2->SetBinContent(46,12);
   htemp__2->SetBinContent(47,18);
   htemp__2->SetBinContent(48,18);
   htemp__2->SetBinContent(49,15);
   htemp__2->SetBinContent(50,6);
   htemp__2->SetBinContent(51,6);
   htemp__2->SetBinContent(52,6);
   htemp__2->SetBinContent(53,6);
   htemp__2->SetBinContent(54,9);
   htemp__2->SetBinContent(55,9);
   htemp__2->SetBinContent(56,6);
   htemp__2->SetBinContent(57,3);
   htemp__2->SetBinContent(58,12);
   htemp__2->SetBinContent(59,9);
   htemp__2->SetBinContent(60,15);
   htemp__2->SetBinContent(61,6);
   htemp__2->SetBinContent(62,6);
   htemp__2->SetBinContent(63,12);
   htemp__2->SetBinContent(64,6);
   htemp__2->SetBinContent(65,12);
   htemp__2->SetBinContent(66,3);
   htemp__2->SetBinContent(68,3);
   htemp__2->SetBinContent(69,6);
   htemp__2->SetBinContent(70,3);
   htemp__2->SetBinContent(71,3);
   htemp__2->SetBinContent(72,12);
   htemp__2->SetBinContent(74,9);
   htemp__2->SetBinContent(75,6);
   htemp__2->SetBinContent(78,3);
   htemp__2->SetBinContent(79,6);
   htemp__2->SetBinContent(80,6);
   htemp__2->SetBinContent(81,12);
   htemp__2->SetBinContent(82,9);
   htemp__2->SetBinContent(84,6);
   htemp__2->SetBinContent(85,3);
   htemp__2->SetBinContent(86,6);
   htemp__2->SetEntries(60000);
   htemp__2->SetDirectory(0);
   htemp__2->SetLineColor(2);
   htemp__2->GetXaxis()->SetTitle("This is line 201"); //area_2988_1
   htemp__2->GetXaxis()->SetLabelFont(42);
   htemp__2->GetXaxis()->SetTitleOffset(1);
   htemp__2->GetXaxis()->SetTitleFont(42);
   htemp__2->GetYaxis()->SetLabelFont(42);
   htemp__2->GetYaxis()->SetTitleFont(42);
   htemp__2->GetZaxis()->SetLabelFont(42);
   htemp__2->GetZaxis()->SetTitleOffset(1);
   htemp__2->GetZaxis()->SetTitleFont(42);
   htemp__2->Draw("histsame");
   
   TPaveText *pt = new TPaveText(0.1704871,0.9240506,0.7679083,0.978903,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Pulse Area at (0,5) and (6,4): No Gel");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();


   //Write your code here:
   
}
