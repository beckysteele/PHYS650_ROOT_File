{
   //gROOT->ProcessLine(".x star.C");
   TGeoManager::Import("star.root");
   new TBrowser;
   //gGeoManager->SetMaxVisNodes(40000);
   gGeoManager->DefaultColors();
   //gGeoManager->GetVolume("IT56")->InvisibleAll();
   //gGeoManager->GetVolume("I215")->SetTransparency(50);
   gGeoManager->GetVolume("CAVE")->Draw("ogl");
}
