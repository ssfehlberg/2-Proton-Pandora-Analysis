//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Apr  9 10:36:57 2020 by ROOT version 6.12/06
// from TTree tree/
// found on file: /pnfs/uboone/scratch/users/sfehlber/2020/April/Apr08/CC2p/overlay_analyzer/final.root
//////////////////////////////////////////////////////////

#ifndef twoproton_eff_h
#define twoproton_eff_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class twoproton_eff {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           subrun;
   Int_t           event;
   Int_t           n_pfp_per_event;
   Int_t           n_trk_per_event;
   Int_t           n_shower_per_event;
   Int_t           n_neutrinos_per_event;
   Int_t           n_nu_per_event;
   Int_t           n_nu_pfp_per_event;
   Int_t           nu_PDG_per_event;
   Int_t           mc_ccnc;
   Int_t           mc_mode;
   Int_t           mc_interactiontype;
   Int_t           mc_hitnuc;
   Float_t         mc_q2;
   Float_t         mc_X;
   Float_t         mc_Y;
   Float_t         mc_Pt;
   Float_t         mc_nu_vtxx;
   Float_t         mc_nu_vtxy;
   Float_t         mc_nu_vtxz;
   Float_t         mc_nu_vtxx_sce;
   Float_t         mc_nu_vtxy_sce;
   Float_t         mc_nu_vtxz_sce;
   Float_t         mc_enu;
   Float_t         mc_wgt;
   Float_t         mc_wgt_cv;
   Float_t         mc_wgt_0_EtaNCEL;
   Float_t         mc_wgt_0_FrAbs_N;
   Float_t         mc_wgt_0_FrAbs_pi;
   Float_t         mc_wgt_0_FrCEx_N;
   Float_t         mc_wgt_0_FrCEx_pi;
   Float_t         mc_wgt_0_FrInel_N;
   Float_t         mc_wgt_0_FrInel_pi;
   Float_t         mc_wgt_0_FrPiProd_N;
   Float_t         mc_wgt_0_FrPiProd_pi;
   Float_t         mc_wgt_0_MFP_N;
   Float_t         mc_wgt_0_MFP_pi;
   Float_t         mc_wgt_0_MaCCQE;
   Float_t         mc_wgt_0_MaCCRES;
   Float_t         mc_wgt_0_MaNCEL;
   Float_t         mc_wgt_0_MaNCRES;
   Float_t         mc_wgt_0_MvCCRES;
   Float_t         mc_wgt_0_MvNCRES;
   Float_t         mc_wgt_0_NonRESBGvnCC1pi;
   Float_t         mc_wgt_0_NonRESBGvnCC2pi;
   Float_t         mc_wgt_0_NonRESBGvnNC1pi;
   Float_t         mc_wgt_0_NonRESBGvnNC2pi;
   Float_t         mc_wgt_0_NonRESBGvpCC1pi;
   Float_t         mc_wgt_0_NonRESBGvpCC2pi;
   Float_t         mc_wgt_0_NonRESBGvpNC1pi;
   Float_t         mc_wgt_0_NonRESBGvpNC2pi;
   Float_t         mc_wgt_0_NormCCMEC;
   Float_t         mc_wgt_0_NormNCMEC;
   Float_t         mc_wgt_1_EtaNCEL;
   Float_t         mc_wgt_1_FrAbs_N;
   Float_t         mc_wgt_1_FrAbs_pi;
   Float_t         mc_wgt_1_FrCEx_N;
   Float_t         mc_wgt_1_FrCEx_pi;
   Float_t         mc_wgt_1_FrInel_N;
   Float_t         mc_wgt_1_FrInel_pi;
   Float_t         mc_wgt_1_FrPiProd_N;
   Float_t         mc_wgt_1_FrPiProd_pi;
   Float_t         mc_wgt_1_MFP_N;
   Float_t         mc_wgt_1_MFP_pi;
   Float_t         mc_wgt_1_MaCCQE;
   Float_t         mc_wgt_1_MaCCRES;
   Float_t         mc_wgt_1_MaNCEL;
   Float_t         mc_wgt_1_MaNCRES;
   Float_t         mc_wgt_1_MvCCRES;
   Float_t         mc_wgt_1_MvNCRES;
   Float_t         mc_wgt_1_NonRESBGvnCC1pi;
   Float_t         mc_wgt_1_NonRESBGvnCC2pi;
   Float_t         mc_wgt_1_NonRESBGvnNC1pi;
   Float_t         mc_wgt_1_NonRESBGvnNC2pi;
   Float_t         mc_wgt_1_NonRESBGvpCC1pi;
   Float_t         mc_wgt_1_NonRESBGvpCC2pi;
   Float_t         mc_wgt_1_NonRESBGvpNC1pi;
   Float_t         mc_wgt_1_NonRESBGvpNC2pi;
   Float_t         mc_wgt_1_NormCCMEC;
   Float_t         mc_wgt_1_NormNCMEC;
   Int_t           evtwgt_genie_pm1_nfunc;
   vector<string>  *evtwgt_genie_pm1_funcname;
   vector<int>     *evtwgt_genie_pm1_nweight;
   vector<vector<double> > *evtwgt_genie_pm1_weight;
   Int_t           evtwgt_genie_multisim_nfunc;
   vector<string>  *evtwgt_genie_multisim_funcname;
   vector<int>     *evtwgt_genie_multisim_nweight;
   vector<vector<double> > *evtwgt_genie_multisim_weight;
   Int_t           evtwgt_flux_multisim_nfunc;
   vector<string>  *evtwgt_flux_multisim_funcname;
   vector<int>     *evtwgt_flux_multisim_nweight;
   vector<vector<double> > *evtwgt_flux_multisim_weight;
   Int_t           mc_nupdg;
   Int_t           mc_n_muon;
   Int_t           mc_n_proton;
   Int_t           mc_n_pionpm;
   Int_t           mc_n_pion0;
   Int_t           mc_n_electron;
   Int_t           mc_n_neutron;
   Int_t           mc_n_threshold_muon;
   Int_t           mc_n_threshold_proton;
   Int_t           mc_n_threshold_pionpm;
   Int_t           mc_n_threshold_pion0;
   Int_t           mc_n_threshold_electron;
   Int_t           mc_n_threshold_neutron;
   vector<float>   *mc_g4_mom_all;
   vector<float>   *mc_g4_mom_muon;
   vector<float>   *mc_g4_mom_proton;
   vector<float>   *mc_g4_mom_electron;
   vector<float>   *mc_g4_mom_pionpm;
   vector<float>   *mc_g4_mom_pion0;
   vector<float>   *mc_g4_mom_neutron;
   vector<float>   *mc_g4_E;
   vector<float>   *mc_g4_p;
   vector<float>   *mc_g4_mass;
   vector<float>   *mc_g4_phi;
   vector<float>   *mc_g4_theta;
   vector<int>     *mc_g4_pdg;
   vector<float>   *mc_g4_start_x;
   vector<float>   *mc_g4_start_y;
   vector<float>   *mc_g4_start_z;
   vector<float>   *mc_g4_end_x;
   vector<float>   *mc_g4_end_y;
   vector<float>   *mc_g4_end_z;
   vector<float>   *mc_g4_start_x_sce;
   vector<float>   *mc_g4_start_y_sce;
   vector<float>   *mc_g4_start_z_sce;
   vector<float>   *mc_g4_end_x_sce;
   vector<float>   *mc_g4_end_y_sce;
   vector<float>   *mc_g4_end_z_sce;
   vector<bool>    *is_from_nu_slice;
   vector<bool>    *is_primary;
   vector<bool>    *is_contained;
   vector<int>     *mc_pdg;
   vector<int>     *mc_primary;
   vector<int>     *mc_origin;
   vector<float>   *mc_length;
   vector<float>   *mc_start_x;
   vector<float>   *mc_start_y;
   vector<float>   *mc_start_z;
   vector<float>   *mc_end_x;
   vector<float>   *mc_end_y;
   vector<float>   *mc_end_z;
   vector<float>   *mc_start_x_sce;
   vector<float>   *mc_start_y_sce;
   vector<float>   *mc_start_z_sce;
   vector<float>   *mc_end_x_sce;
   vector<float>   *mc_end_y_sce;
   vector<float>   *mc_end_z_sce;
   vector<float>   *mc_theta;
   vector<float>   *mc_phi;
   vector<float>   *mc_ke;
   vector<float>   *mc_mom;
   vector<int>     *n_pfp;
   vector<int>     *n_trk;
   vector<int>     *id_pfp;
   vector<int>     *n_shower;
   vector<int>     *parentPDG;
   vector<float>   *trk_score;
   vector<float>   *KE_len;
   vector<float>   *dislen_ratio;
   vector<float>   *reco_q2;
   vector<float>   *top_score;
   vector<int>     *n_daughters;
   Int_t           vtx_n_pfp;
   vector<bool>    *has_shower;
   Float_t         reco_nu_vtxx;
   Float_t         reco_nu_vtxy;
   Float_t         reco_nu_vtxz;
   vector<float>   *reco_length;
   vector<float>   *reco_start_x;
   vector<float>   *reco_start_y;
   vector<float>   *reco_start_z;
   vector<float>   *reco_end_x;
   vector<float>   *reco_end_y;
   vector<float>   *reco_end_z;
   vector<float>   *reco_theta;
   vector<float>   *reco_phi;
   vector<float>   *reco_ke;
   vector<float>   *reco_mom;
   vector<float>   *reco_mom_muon;
   vector<float>   *reco_mom_proton;
   vector<float>   *reco_mom_pion;
   vector<int>     *nhits_0;
   vector<int>     *nhits_1;
   vector<int>     *nhits_2;
   vector<float>   *chi2_p_0;
   vector<float>   *chi2_p_1;
   vector<float>   *chi2_p_2;
   vector<float>   *chi2_mu_0;
   vector<float>   *chi2_mu_1;
   vector<float>   *chi2_mu_2;
   vector<float>   *LL3;
   vector<float>   *LL_p_0;
   vector<float>   *LL_p_1;
   vector<float>   *LL_p_2;
   vector<float>   *LL_mip_0;
   vector<float>   *LL_mip_1;
   vector<float>   *LL_mip_2;
   vector<float>   *LL_mu_0;
   vector<float>   *LL_mu_1;
   vector<float>   *LL_mu_2;
   vector<float>   *LL_back_p_0;
   vector<float>   *LL_back_p_1;
   vector<float>   *LL_back_p_2;
   vector<float>   *LL_back_mu_0;
   vector<float>   *LL_back_mu_1;
   vector<float>   *LL_back_mu_2;
   vector<float>   *TM_dedx_0;
   vector<float>   *TM_dedx_1;
   vector<float>   *TM_dedx_2;
   vector<float>   *PIDA_0;
   vector<float>   *PIDA_1;
   vector<float>   *PIDA_2;
   vector<float>   *start_dedx_0;
   vector<float>   *start_dedx_1;
   vector<float>   *start_dedx_2;
   vector<float>   *end_dedx_0;
   vector<float>   *end_dedx_1;
   vector<float>   *end_dedx_2;
   vector<float>   *ratio_dedx_0;
   vector<float>   *ratio_dedx_1;
   vector<float>   *ratio_dedx_2;
   vector<float>   *avg_dedx_0;
   vector<float>   *avg_dedx_1;
   vector<float>   *avg_dedx_2;
   vector<float>   *total_dedx_0;
   vector<float>   *total_dedx_1;
   vector<float>   *total_dedx_2;
   vector<float>   *KE_calo_0;
   vector<float>   *KE_calo_1;
   vector<float>   *KE_calo_2;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_subrun;   //!
   TBranch        *b_event;   //!
   TBranch        *b_n_pfp_per_event;   //!
   TBranch        *b_n_trk_per_event;   //!
   TBranch        *b_n_shower_per_event;   //!
   TBranch        *b_n_neutrinos_per_event;   //!
   TBranch        *b_n_nu_per_event;   //!
   TBranch        *b_n_nu_pfp_per_event;   //!
   TBranch        *b_nu_PDG_per_event;   //!
   TBranch        *b_mc_ccnc;   //!
   TBranch        *b_mc_mode;   //!
   TBranch        *b_mc_interactiontype;   //!
   TBranch        *b_mc_hitnuc;   //!
   TBranch        *b_mc_q2;   //!
   TBranch        *b_mc_X;   //!
   TBranch        *b_mc_Y;   //!
   TBranch        *b_mc_Pt;   //!
   TBranch        *b_mc_nu_vtxx;   //!
   TBranch        *b_mc_nu_vtxy;   //!
   TBranch        *b_mc_nu_vtxz;   //!
   TBranch        *b_mc_nu_vtxx_sce;   //!
   TBranch        *b_mc_nu_vtxy_sce;   //!
   TBranch        *b_mc_nu_vtxz_sce;   //!
   TBranch        *b_mc_enu;   //!
   TBranch        *b_mc_wgt;   //!
   TBranch        *b_mc_wgt_cv;   //!
   TBranch        *b_mc_wgt_0_EtaNCEL;   //!
   TBranch        *b_mc_wgt_0_FrAbs_N;   //!
   TBranch        *b_mc_wgt_0_FrAbs_pi;   //!
   TBranch        *b_mc_wgt_0_FrCEx_N;   //!
   TBranch        *b_mc_wgt_0_FrCEx_pi;   //!
   TBranch        *b_mc_wgt_0_FrInel_N;   //!
   TBranch        *b_mc_wgt_0_FrInel_pi;   //!
   TBranch        *b_mc_wgt_0_FrPiProd_N;   //!
   TBranch        *b_mc_wgt_0_FrPiProd_pi;   //!
   TBranch        *b_mc_wgt_0_MFP_N;   //!
   TBranch        *b_mc_wgt_0_MFP_pi;   //!
   TBranch        *b_mc_wgt_0_MaCCQE;   //!
   TBranch        *b_mc_wgt_0_MaCCRES;   //!
   TBranch        *b_mc_wgt_0_MaNCEL;   //!
   TBranch        *b_mc_wgt_0_MaNCRES;   //!
   TBranch        *b_mc_wgt_0_MvCCRES;   //!
   TBranch        *b_mc_wgt_0_MvNCRES;   //!
   TBranch        *b_mc_wgt_0_NonRESBGvnCC1pi;   //!
   TBranch        *b_mc_wgt_0_NonRESBGvnCC2pi;   //!
   TBranch        *b_mc_wgt_0_NonRESBGvnNC1pi;   //!
   TBranch        *b_mc_wgt_0_NonRESBGvnNC2pi;   //!
   TBranch        *b_mc_wgt_0_NonRESBGvpCC1pi;   //!
   TBranch        *b_mc_wgt_0_NonRESBGvpCC2pi;   //!
   TBranch        *b_mc_wgt_0_NonRESBGvpNC1pi;   //!
   TBranch        *b_mc_wgt_0_NonRESBGvpNC2pi;   //!
   TBranch        *b_mc_wgt_0_NormCCMEC;   //!
   TBranch        *b_mc_wgt_0_NormNCMEC;   //!
   TBranch        *b_mc_wgt_1_EtaNCEL;   //!
   TBranch        *b_mc_wgt_1_FrAbs_N;   //!
   TBranch        *b_mc_wgt_1_FrAbs_pi;   //!
   TBranch        *b_mc_wgt_1_FrCEx_N;   //!
   TBranch        *b_mc_wgt_1_FrCEx_pi;   //!
   TBranch        *b_mc_wgt_1_FrInel_N;   //!
   TBranch        *b_mc_wgt_1_FrInel_pi;   //!
   TBranch        *b_mc_wgt_1_FrPiProd_N;   //!
   TBranch        *b_mc_wgt_1_FrPiProd_pi;   //!
   TBranch        *b_mc_wgt_1_MFP_N;   //!
   TBranch        *b_mc_wgt_1_MFP_pi;   //!
   TBranch        *b_mc_wgt_1_MaCCQE;   //!
   TBranch        *b_mc_wgt_1_MaCCRES;   //!
   TBranch        *b_mc_wgt_1_MaNCEL;   //!
   TBranch        *b_mc_wgt_1_MaNCRES;   //!
   TBranch        *b_mc_wgt_1_MvCCRES;   //!
   TBranch        *b_mc_wgt_1_MvNCRES;   //!
   TBranch        *b_mc_wgt_1_NonRESBGvnCC1pi;   //!
   TBranch        *b_mc_wgt_1_NonRESBGvnCC2pi;   //!
   TBranch        *b_mc_wgt_1_NonRESBGvnNC1pi;   //!
   TBranch        *b_mc_wgt_1_NonRESBGvnNC2pi;   //!
   TBranch        *b_mc_wgt_1_NonRESBGvpCC1pi;   //!
   TBranch        *b_mc_wgt_1_NonRESBGvpCC2pi;   //!
   TBranch        *b_mc_wgt_1_NonRESBGvpNC1pi;   //!
   TBranch        *b_mc_wgt_1_NonRESBGvpNC2pi;   //!
   TBranch        *b_mc_wgt_1_NormCCMEC;   //!
   TBranch        *b_mc_wgt_1_NormNCMEC;   //!
   TBranch        *b_evtwgt_genie_pm1_nfunc;   //!
   TBranch        *b_evtwgt_genie_pm1_funcname;   //!
   TBranch        *b_evtwgt_genie_pm1_nweight;   //!
   TBranch        *b_evtwgt_genie_pm1_weight;   //!
   TBranch        *b_evtwgt_genie_multisim_nfunc;   //!
   TBranch        *b_evtwgt_genie_multisim_funcname;   //!
   TBranch        *b_evtwgt_genie_multisim_nweight;   //!
   TBranch        *b_evtwgt_genie_multisim_weight;   //!
   TBranch        *b_evtwgt_flux_multisim_nfunc;   //!
   TBranch        *b_evtwgt_flux_multisim_funcname;   //!
   TBranch        *b_evtwgt_flux_multisim_nweight;   //!
   TBranch        *b_evtwgt_flux_multisim_weight;   //!
   TBranch        *b_mc_nupdg;   //!
   TBranch        *b_mc_n_muon;   //!
   TBranch        *b_mc_n_proton;   //!
   TBranch        *b_mc_n_pionpm;   //!
   TBranch        *b_mc_n_pion0;   //!
   TBranch        *b_mc_n_electron;   //!
   TBranch        *b_mc_n_neutron;   //!
   TBranch        *b_mc_n_threshold_muon;   //!
   TBranch        *b_mc_n_threshold_proton;   //!
   TBranch        *b_mc_n_threshold_pionpm;   //!
   TBranch        *b_mc_n_threshold_pion0;   //!
   TBranch        *b_mc_n_threshold_electron;   //!
   TBranch        *b_mc_n_threshold_neutron;   //!
   TBranch        *b_mc_g4_mom_all;   //!
   TBranch        *b_mc_g4_mom_muon;   //!
   TBranch        *b_mc_g4_mom_proton;   //!
   TBranch        *b_mc_g4_mom_electron;   //!
   TBranch        *b_mc_g4_mom_pionpm;   //!
   TBranch        *b_mc_g4_mom_pion0;   //!
   TBranch        *b_mc_g4_mom_neutron;   //!
   TBranch        *b_mc_g4_E;   //!
   TBranch        *b_mc_g4_p;   //!
   TBranch        *b_mc_g4_mass;   //!
   TBranch        *b_mc_g4_phi;   //!
   TBranch        *b_mc_g4_theta;   //!
   TBranch        *b_mc_g4_pdg;   //!
   TBranch        *b_mc_g4_start_x;   //!
   TBranch        *b_mc_g4_start_y;   //!
   TBranch        *b_mc_g4_start_z;   //!
   TBranch        *b_mc_g4_end_x;   //!
   TBranch        *b_mc_g4_end_y;   //!
   TBranch        *b_mc_g4_end_z;   //!
   TBranch        *b_mc_g4_start_x_sce;   //!
   TBranch        *b_mc_g4_start_y_sce;   //!
   TBranch        *b_mc_g4_start_z_sce;   //!
   TBranch        *b_mc_g4_end_x_sce;   //!
   TBranch        *b_mc_g4_end_y_sce;   //!
   TBranch        *b_mc_g4_end_z_sce;   //!
   TBranch        *b_is_from_nu_slice;   //!
   TBranch        *b_is_primary;   //!
   TBranch        *b_is_contained;   //!
   TBranch        *b_mc_pdg;   //!
   TBranch        *b_mc_primary;   //!
   TBranch        *b_mc_origin;   //!
   TBranch        *b_mc_length;   //!
   TBranch        *b_mc_start_x;   //!
   TBranch        *b_mc_start_y;   //!
   TBranch        *b_mc_start_z;   //!
   TBranch        *b_mc_end_x;   //!
   TBranch        *b_mc_end_y;   //!
   TBranch        *b_mc_end_z;   //!
   TBranch        *b_mc_start_x_sce;   //!
   TBranch        *b_mc_start_y_sce;   //!
   TBranch        *b_mc_start_z_sce;   //!
   TBranch        *b_mc_end_x_sce;   //!
   TBranch        *b_mc_end_y_sce;   //!
   TBranch        *b_mc_end_z_sce;   //!
   TBranch        *b_mc_theta;   //!
   TBranch        *b_mc_phi;   //!
   TBranch        *b_mc_ke;   //!
   TBranch        *b_mc_mom;   //!
   TBranch        *b_n_pfp;   //!
   TBranch        *b_n_trk;   //!
   TBranch        *b_id_pfp;   //!
   TBranch        *b_n_shower;   //!
   TBranch        *b_parentPDG;   //!
   TBranch        *b_trk_score;   //!
   TBranch        *b_KE_len;   //!
   TBranch        *b_dislen_ratio;   //!
   TBranch        *b_reco_q2;   //!
   TBranch        *b_top_score;   //!
   TBranch        *b_n_daughters;   //!
   TBranch        *b_vtx_n_pfp;   //!
   TBranch        *b_has_shower;   //!
   TBranch        *b_reco_nu_vtxx;   //!
   TBranch        *b_reco_nu_vtxy;   //!
   TBranch        *b_reco_nu_vtxz;   //!
   TBranch        *b_reco_length;   //!
   TBranch        *b_reco_start_x;   //!
   TBranch        *b_reco_start_y;   //!
   TBranch        *b_reco_start_z;   //!
   TBranch        *b_reco_end_x;   //!
   TBranch        *b_reco_end_y;   //!
   TBranch        *b_reco_end_z;   //!
   TBranch        *b_reco_theta;   //!
   TBranch        *b_reco_phi;   //!
   TBranch        *b_reco_ke;   //!
   TBranch        *b_reco_mom;   //!
   TBranch        *b_reco_mom_muon;   //!
   TBranch        *b_reco_mom_proton;   //!
   TBranch        *b_reco_mom_pion;   //!
   TBranch        *b_nhits_0;   //!
   TBranch        *b_nhits_1;   //!
   TBranch        *b_nhits_2;   //!
   TBranch        *b_chi2_p_0;   //!
   TBranch        *b_chi2_p_1;   //!
   TBranch        *b_chi2_p_2;   //!
   TBranch        *b_chi2_mu_0;   //!
   TBranch        *b_chi2_mu_1;   //!
   TBranch        *b_chi2_mu_2;   //!
   TBranch        *b_LL3;   //!
   TBranch        *b_LL_p_0;   //!
   TBranch        *b_LL_p_1;   //!
   TBranch        *b_LL_p_2;   //!
   TBranch        *b_LL_mip_0;   //!
   TBranch        *b_LL_mip_1;   //!
   TBranch        *b_LL_mip_2;   //!
   TBranch        *b_LL_mu_0;   //!
   TBranch        *b_LL_mu_1;   //!
   TBranch        *b_LL_mu_2;   //!
   TBranch        *b_LL_back_p_0;   //!
   TBranch        *b_LL_back_p_1;   //!
   TBranch        *b_LL_back_p_2;   //!
   TBranch        *b_LL_back_mu_0;   //!
   TBranch        *b_LL_back_mu_1;   //!
   TBranch        *b_LL_back_mu_2;   //!
   TBranch        *b_TM_dedx_0;   //!
   TBranch        *b_TM_dedx_1;   //!
   TBranch        *b_TM_dedx_2;   //!
   TBranch        *b_PIDA_0;   //!
   TBranch        *b_PIDA_1;   //!
   TBranch        *b_PIDA_2;   //!
   TBranch        *b_start_dedx_0;   //!
   TBranch        *b_start_dedx_1;   //!
   TBranch        *b_start_dedx_2;   //!
   TBranch        *b_end_dedx_0;   //!
   TBranch        *b_end_dedx_1;   //!
   TBranch        *b_end_dedx_2;   //!
   TBranch        *b_ratio_dedx_0;   //!
   TBranch        *b_ratio_dedx_1;   //!
   TBranch        *b_ratio_dedx_2;   //!
   TBranch        *b_avg_dedx_0;   //!
   TBranch        *b_avg_dedx_1;   //!
   TBranch        *b_avg_dedx_2;   //!
   TBranch        *b_total_dedx_0;   //!
   TBranch        *b_total_dedx_1;   //!
   TBranch        *b_total_dedx_2;   //!
   TBranch        *b_KE_calo_0;   //!
   TBranch        *b_KE_calo_1;   //!
   TBranch        *b_KE_calo_2;   //!

   twoproton_eff(TTree *tree=0);
   virtual ~twoproton_eff();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void In_FV(float FV_edge, float x, float y, float z);

private:
   bool fv;



};

#endif

#ifdef twoproton_eff_cxx
twoproton_eff::twoproton_eff(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/pnfs/uboone/scratch/users/sfehlber/2020/April/Apr08/CC2p/overlay_analyzer/final.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/pnfs/uboone/scratch/users/sfehlber/2020/April/Apr08/CC2p/overlay_analyzer/final.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/pnfs/uboone/scratch/users/sfehlber/2020/April/Apr08/CC2p/overlay_analyzer/final.root:/TwoProtonAna");
      dir->GetObject("tree",tree);

   }
   Init(tree);
}

twoproton_eff::~twoproton_eff()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t twoproton_eff::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t twoproton_eff::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void twoproton_eff::In_FV(float FV_edge, float x, float y, float z){

  //Just defining the x,y, and z locations of the FV                                                                                                                                                       
  float_t xmin = 0.0 + FV_edge;
  float_t xmax = 256.35 - FV_edge;
  float_t ymin = -116.5 + FV_edge;
  float_t ymax = 116.5 - FV_edge;
  float_t zmin = 0.0 + FV_edge;
  float_t zmax = 1036.8 - FV_edge;

  if((x <= xmin || x >= xmax) || (y <= ymin || y >= ymax) || (z <= zmin || z >= zmax)) {
    fv = false;
  } else{
    fv = true;
  }

}

void twoproton_eff::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   evtwgt_genie_pm1_funcname = 0;
   evtwgt_genie_pm1_nweight = 0;
   evtwgt_genie_pm1_weight = 0;
   evtwgt_genie_multisim_funcname = 0;
   evtwgt_genie_multisim_nweight = 0;
   evtwgt_genie_multisim_weight = 0;
   evtwgt_flux_multisim_funcname = 0;
   evtwgt_flux_multisim_nweight = 0;
   evtwgt_flux_multisim_weight = 0;
   mc_g4_mom_all = 0;
   mc_g4_mom_muon = 0;
   mc_g4_mom_proton = 0;
   mc_g4_mom_electron = 0;
   mc_g4_mom_pionpm = 0;
   mc_g4_mom_pion0 = 0;
   mc_g4_mom_neutron = 0;
   mc_g4_E = 0;
   mc_g4_p = 0;
   mc_g4_mass = 0;
   mc_g4_phi = 0;
   mc_g4_theta = 0;
   mc_g4_pdg = 0;
   mc_g4_start_x = 0;
   mc_g4_start_y = 0;
   mc_g4_start_z = 0;
   mc_g4_end_x = 0;
   mc_g4_end_y = 0;
   mc_g4_end_z = 0;
   mc_g4_start_x_sce = 0;
   mc_g4_start_y_sce = 0;
   mc_g4_start_z_sce = 0;
   mc_g4_end_x_sce = 0;
   mc_g4_end_y_sce = 0;
   mc_g4_end_z_sce = 0;
   is_from_nu_slice = 0;
   is_primary = 0;
   is_contained = 0;
   mc_pdg = 0;
   mc_primary = 0;
   mc_origin = 0;
   mc_length = 0;
   mc_start_x = 0;
   mc_start_y = 0;
   mc_start_z = 0;
   mc_end_x = 0;
   mc_end_y = 0;
   mc_end_z = 0;
   mc_start_x_sce = 0;
   mc_start_y_sce = 0;
   mc_start_z_sce = 0;
   mc_end_x_sce = 0;
   mc_end_y_sce = 0;
   mc_end_z_sce = 0;
   mc_theta = 0;
   mc_phi = 0;
   mc_ke = 0;
   mc_mom = 0;
   n_pfp = 0;
   n_trk = 0;
   id_pfp = 0;
   n_shower = 0;
   parentPDG = 0;
   trk_score = 0;
   KE_len = 0;
   dislen_ratio = 0;
   reco_q2 = 0;
   top_score = 0;
   n_daughters = 0;
   has_shower = 0;
   reco_length = 0;
   reco_start_x = 0;
   reco_start_y = 0;
   reco_start_z = 0;
   reco_end_x = 0;
   reco_end_y = 0;
   reco_end_z = 0;
   reco_theta = 0;
   reco_phi = 0;
   reco_ke = 0;
   reco_mom = 0;
   reco_mom_muon = 0;
   reco_mom_proton = 0;
   reco_mom_pion = 0;
   nhits_0 = 0;
   nhits_1 = 0;
   nhits_2 = 0;
   chi2_p_0 = 0;
   chi2_p_1 = 0;
   chi2_p_2 = 0;
   chi2_mu_0 = 0;
   chi2_mu_1 = 0;
   chi2_mu_2 = 0;
   LL3 = 0;
   LL_p_0 = 0;
   LL_p_1 = 0;
   LL_p_2 = 0;
   LL_mip_0 = 0;
   LL_mip_1 = 0;
   LL_mip_2 = 0;
   LL_mu_0 = 0;
   LL_mu_1 = 0;
   LL_mu_2 = 0;
   LL_back_p_0 = 0;
   LL_back_p_1 = 0;
   LL_back_p_2 = 0;
   LL_back_mu_0 = 0;
   LL_back_mu_1 = 0;
   LL_back_mu_2 = 0;
   TM_dedx_0 = 0;
   TM_dedx_1 = 0;
   TM_dedx_2 = 0;
   PIDA_0 = 0;
   PIDA_1 = 0;
   PIDA_2 = 0;
   start_dedx_0 = 0;
   start_dedx_1 = 0;
   start_dedx_2 = 0;
   end_dedx_0 = 0;
   end_dedx_1 = 0;
   end_dedx_2 = 0;
   ratio_dedx_0 = 0;
   ratio_dedx_1 = 0;
   ratio_dedx_2 = 0;
   avg_dedx_0 = 0;
   avg_dedx_1 = 0;
   avg_dedx_2 = 0;
   total_dedx_0 = 0;
   total_dedx_1 = 0;
   total_dedx_2 = 0;
   KE_calo_0 = 0;
   KE_calo_1 = 0;
   KE_calo_2 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("subrun", &subrun, &b_subrun);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("n_pfp_per_event", &n_pfp_per_event, &b_n_pfp_per_event);
   fChain->SetBranchAddress("n_trk_per_event", &n_trk_per_event, &b_n_trk_per_event);
   fChain->SetBranchAddress("n_shower_per_event", &n_shower_per_event, &b_n_shower_per_event);
   fChain->SetBranchAddress("n_neutrinos_per_event", &n_neutrinos_per_event, &b_n_neutrinos_per_event);
   fChain->SetBranchAddress("n_nu_per_event", &n_nu_per_event, &b_n_nu_per_event);
   fChain->SetBranchAddress("n_nu_pfp_per_event", &n_nu_pfp_per_event, &b_n_nu_pfp_per_event);
   fChain->SetBranchAddress("nu_PDG_per_event", &nu_PDG_per_event, &b_nu_PDG_per_event);
   fChain->SetBranchAddress("mc_ccnc", &mc_ccnc, &b_mc_ccnc);
   fChain->SetBranchAddress("mc_mode", &mc_mode, &b_mc_mode);
   fChain->SetBranchAddress("mc_interactiontype", &mc_interactiontype, &b_mc_interactiontype);
   fChain->SetBranchAddress("mc_hitnuc", &mc_hitnuc, &b_mc_hitnuc);
   fChain->SetBranchAddress("mc_q2", &mc_q2, &b_mc_q2);
   fChain->SetBranchAddress("mc_X", &mc_X, &b_mc_X);
   fChain->SetBranchAddress("mc_Y", &mc_Y, &b_mc_Y);
   fChain->SetBranchAddress("mc_Pt", &mc_Pt, &b_mc_Pt);
   fChain->SetBranchAddress("mc_nu_vtxx", &mc_nu_vtxx, &b_mc_nu_vtxx);
   fChain->SetBranchAddress("mc_nu_vtxy", &mc_nu_vtxy, &b_mc_nu_vtxy);
   fChain->SetBranchAddress("mc_nu_vtxz", &mc_nu_vtxz, &b_mc_nu_vtxz);
   fChain->SetBranchAddress("mc_nu_vtxx_sce", &mc_nu_vtxx_sce, &b_mc_nu_vtxx_sce);
   fChain->SetBranchAddress("mc_nu_vtxy_sce", &mc_nu_vtxy_sce, &b_mc_nu_vtxy_sce);
   fChain->SetBranchAddress("mc_nu_vtxz_sce", &mc_nu_vtxz_sce, &b_mc_nu_vtxz_sce);
   fChain->SetBranchAddress("mc_enu", &mc_enu, &b_mc_enu);
   fChain->SetBranchAddress("mc_wgt", &mc_wgt, &b_mc_wgt);
   fChain->SetBranchAddress("mc_wgt_cv", &mc_wgt_cv, &b_mc_wgt_cv);
   fChain->SetBranchAddress("mc_wgt_0_EtaNCEL", &mc_wgt_0_EtaNCEL, &b_mc_wgt_0_EtaNCEL);
   fChain->SetBranchAddress("mc_wgt_0_FrAbs_N", &mc_wgt_0_FrAbs_N, &b_mc_wgt_0_FrAbs_N);
   fChain->SetBranchAddress("mc_wgt_0_FrAbs_pi", &mc_wgt_0_FrAbs_pi, &b_mc_wgt_0_FrAbs_pi);
   fChain->SetBranchAddress("mc_wgt_0_FrCEx_N", &mc_wgt_0_FrCEx_N, &b_mc_wgt_0_FrCEx_N);
   fChain->SetBranchAddress("mc_wgt_0_FrCEx_pi", &mc_wgt_0_FrCEx_pi, &b_mc_wgt_0_FrCEx_pi);
   fChain->SetBranchAddress("mc_wgt_0_FrInel_N", &mc_wgt_0_FrInel_N, &b_mc_wgt_0_FrInel_N);
   fChain->SetBranchAddress("mc_wgt_0_FrInel_pi", &mc_wgt_0_FrInel_pi, &b_mc_wgt_0_FrInel_pi);
   fChain->SetBranchAddress("mc_wgt_0_FrPiProd_N", &mc_wgt_0_FrPiProd_N, &b_mc_wgt_0_FrPiProd_N);
   fChain->SetBranchAddress("mc_wgt_0_FrPiProd_pi", &mc_wgt_0_FrPiProd_pi, &b_mc_wgt_0_FrPiProd_pi);
   fChain->SetBranchAddress("mc_wgt_0_MFP_N", &mc_wgt_0_MFP_N, &b_mc_wgt_0_MFP_N);
   fChain->SetBranchAddress("mc_wgt_0_MFP_pi", &mc_wgt_0_MFP_pi, &b_mc_wgt_0_MFP_pi);
   fChain->SetBranchAddress("mc_wgt_0_MaCCQE", &mc_wgt_0_MaCCQE, &b_mc_wgt_0_MaCCQE);
   fChain->SetBranchAddress("mc_wgt_0_MaCCRES", &mc_wgt_0_MaCCRES, &b_mc_wgt_0_MaCCRES);
   fChain->SetBranchAddress("mc_wgt_0_MaNCEL", &mc_wgt_0_MaNCEL, &b_mc_wgt_0_MaNCEL);
   fChain->SetBranchAddress("mc_wgt_0_MaNCRES", &mc_wgt_0_MaNCRES, &b_mc_wgt_0_MaNCRES);
   fChain->SetBranchAddress("mc_wgt_0_MvCCRES", &mc_wgt_0_MvCCRES, &b_mc_wgt_0_MvCCRES);
   fChain->SetBranchAddress("mc_wgt_0_MvNCRES", &mc_wgt_0_MvNCRES, &b_mc_wgt_0_MvNCRES);
   fChain->SetBranchAddress("mc_wgt_0_NonRESBGvnCC1pi", &mc_wgt_0_NonRESBGvnCC1pi, &b_mc_wgt_0_NonRESBGvnCC1pi);
   fChain->SetBranchAddress("mc_wgt_0_NonRESBGvnCC2pi", &mc_wgt_0_NonRESBGvnCC2pi, &b_mc_wgt_0_NonRESBGvnCC2pi);
   fChain->SetBranchAddress("mc_wgt_0_NonRESBGvnNC1pi", &mc_wgt_0_NonRESBGvnNC1pi, &b_mc_wgt_0_NonRESBGvnNC1pi);
   fChain->SetBranchAddress("mc_wgt_0_NonRESBGvnNC2pi", &mc_wgt_0_NonRESBGvnNC2pi, &b_mc_wgt_0_NonRESBGvnNC2pi);
   fChain->SetBranchAddress("mc_wgt_0_NonRESBGvpCC1pi", &mc_wgt_0_NonRESBGvpCC1pi, &b_mc_wgt_0_NonRESBGvpCC1pi);
   fChain->SetBranchAddress("mc_wgt_0_NonRESBGvpCC2pi", &mc_wgt_0_NonRESBGvpCC2pi, &b_mc_wgt_0_NonRESBGvpCC2pi);
   fChain->SetBranchAddress("mc_wgt_0_NonRESBGvpNC1pi", &mc_wgt_0_NonRESBGvpNC1pi, &b_mc_wgt_0_NonRESBGvpNC1pi);
   fChain->SetBranchAddress("mc_wgt_0_NonRESBGvpNC2pi", &mc_wgt_0_NonRESBGvpNC2pi, &b_mc_wgt_0_NonRESBGvpNC2pi);
   fChain->SetBranchAddress("mc_wgt_0_NormCCMEC", &mc_wgt_0_NormCCMEC, &b_mc_wgt_0_NormCCMEC);
   fChain->SetBranchAddress("mc_wgt_0_NormNCMEC", &mc_wgt_0_NormNCMEC, &b_mc_wgt_0_NormNCMEC);
   fChain->SetBranchAddress("mc_wgt_1_EtaNCEL", &mc_wgt_1_EtaNCEL, &b_mc_wgt_1_EtaNCEL);
   fChain->SetBranchAddress("mc_wgt_1_FrAbs_N", &mc_wgt_1_FrAbs_N, &b_mc_wgt_1_FrAbs_N);
   fChain->SetBranchAddress("mc_wgt_1_FrAbs_pi", &mc_wgt_1_FrAbs_pi, &b_mc_wgt_1_FrAbs_pi);
   fChain->SetBranchAddress("mc_wgt_1_FrCEx_N", &mc_wgt_1_FrCEx_N, &b_mc_wgt_1_FrCEx_N);
   fChain->SetBranchAddress("mc_wgt_1_FrCEx_pi", &mc_wgt_1_FrCEx_pi, &b_mc_wgt_1_FrCEx_pi);
   fChain->SetBranchAddress("mc_wgt_1_FrInel_N", &mc_wgt_1_FrInel_N, &b_mc_wgt_1_FrInel_N);
   fChain->SetBranchAddress("mc_wgt_1_FrInel_pi", &mc_wgt_1_FrInel_pi, &b_mc_wgt_1_FrInel_pi);
   fChain->SetBranchAddress("mc_wgt_1_FrPiProd_N", &mc_wgt_1_FrPiProd_N, &b_mc_wgt_1_FrPiProd_N);
   fChain->SetBranchAddress("mc_wgt_1_FrPiProd_pi", &mc_wgt_1_FrPiProd_pi, &b_mc_wgt_1_FrPiProd_pi);
   fChain->SetBranchAddress("mc_wgt_1_MFP_N", &mc_wgt_1_MFP_N, &b_mc_wgt_1_MFP_N);
   fChain->SetBranchAddress("mc_wgt_1_MFP_pi", &mc_wgt_1_MFP_pi, &b_mc_wgt_1_MFP_pi);
   fChain->SetBranchAddress("mc_wgt_1_MaCCQE", &mc_wgt_1_MaCCQE, &b_mc_wgt_1_MaCCQE);
   fChain->SetBranchAddress("mc_wgt_1_MaCCRES", &mc_wgt_1_MaCCRES, &b_mc_wgt_1_MaCCRES);
   fChain->SetBranchAddress("mc_wgt_1_MaNCEL", &mc_wgt_1_MaNCEL, &b_mc_wgt_1_MaNCEL);
   fChain->SetBranchAddress("mc_wgt_1_MaNCRES", &mc_wgt_1_MaNCRES, &b_mc_wgt_1_MaNCRES);
   fChain->SetBranchAddress("mc_wgt_1_MvCCRES", &mc_wgt_1_MvCCRES, &b_mc_wgt_1_MvCCRES);
   fChain->SetBranchAddress("mc_wgt_1_MvNCRES", &mc_wgt_1_MvNCRES, &b_mc_wgt_1_MvNCRES);
   fChain->SetBranchAddress("mc_wgt_1_NonRESBGvnCC1pi", &mc_wgt_1_NonRESBGvnCC1pi, &b_mc_wgt_1_NonRESBGvnCC1pi);
   fChain->SetBranchAddress("mc_wgt_1_NonRESBGvnCC2pi", &mc_wgt_1_NonRESBGvnCC2pi, &b_mc_wgt_1_NonRESBGvnCC2pi);
   fChain->SetBranchAddress("mc_wgt_1_NonRESBGvnNC1pi", &mc_wgt_1_NonRESBGvnNC1pi, &b_mc_wgt_1_NonRESBGvnNC1pi);
   fChain->SetBranchAddress("mc_wgt_1_NonRESBGvnNC2pi", &mc_wgt_1_NonRESBGvnNC2pi, &b_mc_wgt_1_NonRESBGvnNC2pi);
   fChain->SetBranchAddress("mc_wgt_1_NonRESBGvpCC1pi", &mc_wgt_1_NonRESBGvpCC1pi, &b_mc_wgt_1_NonRESBGvpCC1pi);
   fChain->SetBranchAddress("mc_wgt_1_NonRESBGvpCC2pi", &mc_wgt_1_NonRESBGvpCC2pi, &b_mc_wgt_1_NonRESBGvpCC2pi);
   fChain->SetBranchAddress("mc_wgt_1_NonRESBGvpNC1pi", &mc_wgt_1_NonRESBGvpNC1pi, &b_mc_wgt_1_NonRESBGvpNC1pi);
   fChain->SetBranchAddress("mc_wgt_1_NonRESBGvpNC2pi", &mc_wgt_1_NonRESBGvpNC2pi, &b_mc_wgt_1_NonRESBGvpNC2pi);
   fChain->SetBranchAddress("mc_wgt_1_NormCCMEC", &mc_wgt_1_NormCCMEC, &b_mc_wgt_1_NormCCMEC);
   fChain->SetBranchAddress("mc_wgt_1_NormNCMEC", &mc_wgt_1_NormNCMEC, &b_mc_wgt_1_NormNCMEC);
   fChain->SetBranchAddress("evtwgt_genie_pm1_nfunc", &evtwgt_genie_pm1_nfunc, &b_evtwgt_genie_pm1_nfunc);
   fChain->SetBranchAddress("evtwgt_genie_pm1_funcname", &evtwgt_genie_pm1_funcname, &b_evtwgt_genie_pm1_funcname);
   fChain->SetBranchAddress("evtwgt_genie_pm1_nweight", &evtwgt_genie_pm1_nweight, &b_evtwgt_genie_pm1_nweight);
   fChain->SetBranchAddress("evtwgt_genie_pm1_weight", &evtwgt_genie_pm1_weight, &b_evtwgt_genie_pm1_weight);
   fChain->SetBranchAddress("evtwgt_genie_multisim_nfunc", &evtwgt_genie_multisim_nfunc, &b_evtwgt_genie_multisim_nfunc);
   fChain->SetBranchAddress("evtwgt_genie_multisim_funcname", &evtwgt_genie_multisim_funcname, &b_evtwgt_genie_multisim_funcname);
   fChain->SetBranchAddress("evtwgt_genie_multisim_nweight", &evtwgt_genie_multisim_nweight, &b_evtwgt_genie_multisim_nweight);
   fChain->SetBranchAddress("evtwgt_genie_multisim_weight", &evtwgt_genie_multisim_weight, &b_evtwgt_genie_multisim_weight);
   fChain->SetBranchAddress("evtwgt_flux_multisim_nfunc", &evtwgt_flux_multisim_nfunc, &b_evtwgt_flux_multisim_nfunc);
   fChain->SetBranchAddress("evtwgt_flux_multisim_funcname", &evtwgt_flux_multisim_funcname, &b_evtwgt_flux_multisim_funcname);
   fChain->SetBranchAddress("evtwgt_flux_multisim_nweight", &evtwgt_flux_multisim_nweight, &b_evtwgt_flux_multisim_nweight);
   fChain->SetBranchAddress("evtwgt_flux_multisim_weight", &evtwgt_flux_multisim_weight, &b_evtwgt_flux_multisim_weight);
   fChain->SetBranchAddress("mc_nupdg", &mc_nupdg, &b_mc_nupdg);
   fChain->SetBranchAddress("mc_n_muon", &mc_n_muon, &b_mc_n_muon);
   fChain->SetBranchAddress("mc_n_proton", &mc_n_proton, &b_mc_n_proton);
   fChain->SetBranchAddress("mc_n_pionpm", &mc_n_pionpm, &b_mc_n_pionpm);
   fChain->SetBranchAddress("mc_n_pion0", &mc_n_pion0, &b_mc_n_pion0);
   fChain->SetBranchAddress("mc_n_electron", &mc_n_electron, &b_mc_n_electron);
   fChain->SetBranchAddress("mc_n_neutron", &mc_n_neutron, &b_mc_n_neutron);
   fChain->SetBranchAddress("mc_n_threshold_muon", &mc_n_threshold_muon, &b_mc_n_threshold_muon);
   fChain->SetBranchAddress("mc_n_threshold_proton", &mc_n_threshold_proton, &b_mc_n_threshold_proton);
   fChain->SetBranchAddress("mc_n_threshold_pionpm", &mc_n_threshold_pionpm, &b_mc_n_threshold_pionpm);
   fChain->SetBranchAddress("mc_n_threshold_pion0", &mc_n_threshold_pion0, &b_mc_n_threshold_pion0);
   fChain->SetBranchAddress("mc_n_threshold_electron", &mc_n_threshold_electron, &b_mc_n_threshold_electron);
   fChain->SetBranchAddress("mc_n_threshold_neutron", &mc_n_threshold_neutron, &b_mc_n_threshold_neutron);
   fChain->SetBranchAddress("mc_g4_mom_all", &mc_g4_mom_all, &b_mc_g4_mom_all);
   fChain->SetBranchAddress("mc_g4_mom_muon", &mc_g4_mom_muon, &b_mc_g4_mom_muon);
   fChain->SetBranchAddress("mc_g4_mom_proton", &mc_g4_mom_proton, &b_mc_g4_mom_proton);
   fChain->SetBranchAddress("mc_g4_mom_electron", &mc_g4_mom_electron, &b_mc_g4_mom_electron);
   fChain->SetBranchAddress("mc_g4_mom_pionpm", &mc_g4_mom_pionpm, &b_mc_g4_mom_pionpm);
   fChain->SetBranchAddress("mc_g4_mom_pion0", &mc_g4_mom_pion0, &b_mc_g4_mom_pion0);
   fChain->SetBranchAddress("mc_g4_mom_neutron", &mc_g4_mom_neutron, &b_mc_g4_mom_neutron);
   fChain->SetBranchAddress("mc_g4_E", &mc_g4_E, &b_mc_g4_E);
   fChain->SetBranchAddress("mc_g4_p", &mc_g4_p, &b_mc_g4_p);
   fChain->SetBranchAddress("mc_g4_mass", &mc_g4_mass, &b_mc_g4_mass);
   fChain->SetBranchAddress("mc_g4_phi", &mc_g4_phi, &b_mc_g4_phi);
   fChain->SetBranchAddress("mc_g4_theta", &mc_g4_theta, &b_mc_g4_theta);
   fChain->SetBranchAddress("mc_g4_pdg", &mc_g4_pdg, &b_mc_g4_pdg);
   fChain->SetBranchAddress("mc_g4_start_x", &mc_g4_start_x, &b_mc_g4_start_x);
   fChain->SetBranchAddress("mc_g4_start_y", &mc_g4_start_y, &b_mc_g4_start_y);
   fChain->SetBranchAddress("mc_g4_start_z", &mc_g4_start_z, &b_mc_g4_start_z);
   fChain->SetBranchAddress("mc_g4_end_x", &mc_g4_end_x, &b_mc_g4_end_x);
   fChain->SetBranchAddress("mc_g4_end_y", &mc_g4_end_y, &b_mc_g4_end_y);
   fChain->SetBranchAddress("mc_g4_end_z", &mc_g4_end_z, &b_mc_g4_end_z);
   fChain->SetBranchAddress("mc_g4_start_x_sce", &mc_g4_start_x_sce, &b_mc_g4_start_x_sce);
   fChain->SetBranchAddress("mc_g4_start_y_sce", &mc_g4_start_y_sce, &b_mc_g4_start_y_sce);
   fChain->SetBranchAddress("mc_g4_start_z_sce", &mc_g4_start_z_sce, &b_mc_g4_start_z_sce);
   fChain->SetBranchAddress("mc_g4_end_x_sce", &mc_g4_end_x_sce, &b_mc_g4_end_x_sce);
   fChain->SetBranchAddress("mc_g4_end_y_sce", &mc_g4_end_y_sce, &b_mc_g4_end_y_sce);
   fChain->SetBranchAddress("mc_g4_end_z_sce", &mc_g4_end_z_sce, &b_mc_g4_end_z_sce);
   fChain->SetBranchAddress("is_from_nu_slice", &is_from_nu_slice, &b_is_from_nu_slice);
   fChain->SetBranchAddress("is_primary", &is_primary, &b_is_primary);
   fChain->SetBranchAddress("is_contained", &is_contained, &b_is_contained);
   fChain->SetBranchAddress("mc_pdg", &mc_pdg, &b_mc_pdg);
   fChain->SetBranchAddress("mc_primary", &mc_primary, &b_mc_primary);
   fChain->SetBranchAddress("mc_origin", &mc_origin, &b_mc_origin);
   fChain->SetBranchAddress("mc_length", &mc_length, &b_mc_length);
   fChain->SetBranchAddress("mc_start_x", &mc_start_x, &b_mc_start_x);
   fChain->SetBranchAddress("mc_start_y", &mc_start_y, &b_mc_start_y);
   fChain->SetBranchAddress("mc_start_z", &mc_start_z, &b_mc_start_z);
   fChain->SetBranchAddress("mc_end_x", &mc_end_x, &b_mc_end_x);
   fChain->SetBranchAddress("mc_end_y", &mc_end_y, &b_mc_end_y);
   fChain->SetBranchAddress("mc_end_z", &mc_end_z, &b_mc_end_z);
   fChain->SetBranchAddress("mc_start_x_sce", &mc_start_x_sce, &b_mc_start_x_sce);
   fChain->SetBranchAddress("mc_start_y_sce", &mc_start_y_sce, &b_mc_start_y_sce);
   fChain->SetBranchAddress("mc_start_z_sce", &mc_start_z_sce, &b_mc_start_z_sce);
   fChain->SetBranchAddress("mc_end_x_sce", &mc_end_x_sce, &b_mc_end_x_sce);
   fChain->SetBranchAddress("mc_end_y_sce", &mc_end_y_sce, &b_mc_end_y_sce);
   fChain->SetBranchAddress("mc_end_z_sce", &mc_end_z_sce, &b_mc_end_z_sce);
   fChain->SetBranchAddress("mc_theta", &mc_theta, &b_mc_theta);
   fChain->SetBranchAddress("mc_phi", &mc_phi, &b_mc_phi);
   fChain->SetBranchAddress("mc_ke", &mc_ke, &b_mc_ke);
   fChain->SetBranchAddress("mc_mom", &mc_mom, &b_mc_mom);
   fChain->SetBranchAddress("n_pfp", &n_pfp, &b_n_pfp);
   fChain->SetBranchAddress("n_trk", &n_trk, &b_n_trk);
   fChain->SetBranchAddress("id_pfp", &id_pfp, &b_id_pfp);
   fChain->SetBranchAddress("n_shower", &n_shower, &b_n_shower);
   fChain->SetBranchAddress("parentPDG", &parentPDG, &b_parentPDG);
   fChain->SetBranchAddress("trk_score", &trk_score, &b_trk_score);
   fChain->SetBranchAddress("KE_len", &KE_len, &b_KE_len);
   fChain->SetBranchAddress("dislen_ratio", &dislen_ratio, &b_dislen_ratio);
   fChain->SetBranchAddress("reco_q2", &reco_q2, &b_reco_q2);
   fChain->SetBranchAddress("top_score", &top_score, &b_top_score);
   fChain->SetBranchAddress("n_daughters", &n_daughters, &b_n_daughters);
   fChain->SetBranchAddress("vtx_n_pfp", &vtx_n_pfp, &b_vtx_n_pfp);
   fChain->SetBranchAddress("has_shower", &has_shower, &b_has_shower);
   fChain->SetBranchAddress("reco_nu_vtxx", &reco_nu_vtxx, &b_reco_nu_vtxx);
   fChain->SetBranchAddress("reco_nu_vtxy", &reco_nu_vtxy, &b_reco_nu_vtxy);
   fChain->SetBranchAddress("reco_nu_vtxz", &reco_nu_vtxz, &b_reco_nu_vtxz);
   fChain->SetBranchAddress("reco_length", &reco_length, &b_reco_length);
   fChain->SetBranchAddress("reco_start_x", &reco_start_x, &b_reco_start_x);
   fChain->SetBranchAddress("reco_start_y", &reco_start_y, &b_reco_start_y);
   fChain->SetBranchAddress("reco_start_z", &reco_start_z, &b_reco_start_z);
   fChain->SetBranchAddress("reco_end_x", &reco_end_x, &b_reco_end_x);
   fChain->SetBranchAddress("reco_end_y", &reco_end_y, &b_reco_end_y);
   fChain->SetBranchAddress("reco_end_z", &reco_end_z, &b_reco_end_z);
   fChain->SetBranchAddress("reco_theta", &reco_theta, &b_reco_theta);
   fChain->SetBranchAddress("reco_phi", &reco_phi, &b_reco_phi);
   fChain->SetBranchAddress("reco_ke", &reco_ke, &b_reco_ke);
   fChain->SetBranchAddress("reco_mom", &reco_mom, &b_reco_mom);
   fChain->SetBranchAddress("reco_mom_muon", &reco_mom_muon, &b_reco_mom_muon);
   fChain->SetBranchAddress("reco_mom_proton", &reco_mom_proton, &b_reco_mom_proton);
   fChain->SetBranchAddress("reco_mom_pion", &reco_mom_pion, &b_reco_mom_pion);
   fChain->SetBranchAddress("nhits_0", &nhits_0, &b_nhits_0);
   fChain->SetBranchAddress("nhits_1", &nhits_1, &b_nhits_1);
   fChain->SetBranchAddress("nhits_2", &nhits_2, &b_nhits_2);
   fChain->SetBranchAddress("chi2_p_0", &chi2_p_0, &b_chi2_p_0);
   fChain->SetBranchAddress("chi2_p_1", &chi2_p_1, &b_chi2_p_1);
   fChain->SetBranchAddress("chi2_p_2", &chi2_p_2, &b_chi2_p_2);
   fChain->SetBranchAddress("chi2_mu_0", &chi2_mu_0, &b_chi2_mu_0);
   fChain->SetBranchAddress("chi2_mu_1", &chi2_mu_1, &b_chi2_mu_1);
   fChain->SetBranchAddress("chi2_mu_2", &chi2_mu_2, &b_chi2_mu_2);
   fChain->SetBranchAddress("LL3", &LL3, &b_LL3);
   fChain->SetBranchAddress("LL_p_0", &LL_p_0, &b_LL_p_0);
   fChain->SetBranchAddress("LL_p_1", &LL_p_1, &b_LL_p_1);
   fChain->SetBranchAddress("LL_p_2", &LL_p_2, &b_LL_p_2);
   fChain->SetBranchAddress("LL_mip_0", &LL_mip_0, &b_LL_mip_0);
   fChain->SetBranchAddress("LL_mip_1", &LL_mip_1, &b_LL_mip_1);
   fChain->SetBranchAddress("LL_mip_2", &LL_mip_2, &b_LL_mip_2);
   fChain->SetBranchAddress("LL_mu_0", &LL_mu_0, &b_LL_mu_0);
   fChain->SetBranchAddress("LL_mu_1", &LL_mu_1, &b_LL_mu_1);
   fChain->SetBranchAddress("LL_mu_2", &LL_mu_2, &b_LL_mu_2);
   fChain->SetBranchAddress("LL_back_p_0", &LL_back_p_0, &b_LL_back_p_0);
   fChain->SetBranchAddress("LL_back_p_1", &LL_back_p_1, &b_LL_back_p_1);
   fChain->SetBranchAddress("LL_back_p_2", &LL_back_p_2, &b_LL_back_p_2);
   fChain->SetBranchAddress("LL_back_mu_0", &LL_back_mu_0, &b_LL_back_mu_0);
   fChain->SetBranchAddress("LL_back_mu_1", &LL_back_mu_1, &b_LL_back_mu_1);
   fChain->SetBranchAddress("LL_back_mu_2", &LL_back_mu_2, &b_LL_back_mu_2);
   fChain->SetBranchAddress("TM_dedx_0", &TM_dedx_0, &b_TM_dedx_0);
   fChain->SetBranchAddress("TM_dedx_1", &TM_dedx_1, &b_TM_dedx_1);
   fChain->SetBranchAddress("TM_dedx_2", &TM_dedx_2, &b_TM_dedx_2);
   fChain->SetBranchAddress("PIDA_0", &PIDA_0, &b_PIDA_0);
   fChain->SetBranchAddress("PIDA_1", &PIDA_1, &b_PIDA_1);
   fChain->SetBranchAddress("PIDA_2", &PIDA_2, &b_PIDA_2);
   fChain->SetBranchAddress("start_dedx_0", &start_dedx_0, &b_start_dedx_0);
   fChain->SetBranchAddress("start_dedx_1", &start_dedx_1, &b_start_dedx_1);
   fChain->SetBranchAddress("start_dedx_2", &start_dedx_2, &b_start_dedx_2);
   fChain->SetBranchAddress("end_dedx_0", &end_dedx_0, &b_end_dedx_0);
   fChain->SetBranchAddress("end_dedx_1", &end_dedx_1, &b_end_dedx_1);
   fChain->SetBranchAddress("end_dedx_2", &end_dedx_2, &b_end_dedx_2);
   fChain->SetBranchAddress("ratio_dedx_0", &ratio_dedx_0, &b_ratio_dedx_0);
   fChain->SetBranchAddress("ratio_dedx_1", &ratio_dedx_1, &b_ratio_dedx_1);
   fChain->SetBranchAddress("ratio_dedx_2", &ratio_dedx_2, &b_ratio_dedx_2);
   fChain->SetBranchAddress("avg_dedx_0", &avg_dedx_0, &b_avg_dedx_0);
   fChain->SetBranchAddress("avg_dedx_1", &avg_dedx_1, &b_avg_dedx_1);
   fChain->SetBranchAddress("avg_dedx_2", &avg_dedx_2, &b_avg_dedx_2);
   fChain->SetBranchAddress("total_dedx_0", &total_dedx_0, &b_total_dedx_0);
   fChain->SetBranchAddress("total_dedx_1", &total_dedx_1, &b_total_dedx_1);
   fChain->SetBranchAddress("total_dedx_2", &total_dedx_2, &b_total_dedx_2);
   fChain->SetBranchAddress("KE_calo_0", &KE_calo_0, &b_KE_calo_0);
   fChain->SetBranchAddress("KE_calo_1", &KE_calo_1, &b_KE_calo_1);
   fChain->SetBranchAddress("KE_calo_2", &KE_calo_2, &b_KE_calo_2);
   Notify();
}

Bool_t twoproton_eff::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void twoproton_eff::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t twoproton_eff::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef twoproton_eff_cxx
