class CfgObjectInteractions {
    class Default {
        interactMode = 0;
        distance = 0;
    	toxicChance = 0;
    	bleedChance = 0;
    	bloodpChance = 0;
    	fatigueChance = 0;
    	bleedAmount = 0;
    	bloodpAmount = 0;
    	soundEffect[] = {};
    	soundEffectGlobal = 0;
    	animationEffect[] = {};
    	animationEffectGlobal = 0;
    	canSee = "false";
    	ppEffect = 0;
        aliveState = 0; // 0 = alive or dead, 1 = dead, 2 = alive.
        interactAttributes[] = {};
    };
    class Land_MPS_EPOCH : Default {};
    class container_epoch : Default {};

    // Base Building Start
    class PlotPole_EPOCH : Default {
        interactMode = 1;
    };
    class Tipi_EPOCH : Default {
        interactMode = 4;
    };
    class Tipi_SIM_EPOCH : Default {
        interactMode = 1;
    };
    class StorageShelf_EPOCH : Default {
        interactMode = 4;
    };
    class WorkBench_EPOCH : Default {
        interactMode = 4;
    };
    class Foundation_EPOCH : Default {
        interactMode = 1;
    };
    class WoodFoundation_EPOCH : Default {
        interactMode = 1;
    };
    // Base Building stop

    class Sheep_random_EPOCH : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
            {"Soiled",1}
		};
    };
    class Goat_random_EPOCH : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
            {"Soiled",1}
		};
    };
    class Cock_random_EPOCH : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
            {"Soiled",1}
		};
    };
    class Hen_random_EPOCH : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
            {"Soiled",1}
		};
    };
    class Rabbit_EPOCH : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
            {"Soiled",1}
		};
    };
    class Fin_random_EPOCH : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
			{"Karma",-100},
            {"Soiled",1}
		};
    };
    class Alsatian_Random_EPOCH : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
			{"Karma",-100},
            {"Soiled",1}
		};
    };
    class Epoch_Sapper_F : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
			{"Toxicity",20,1},
            {"Soiled",20,1}
		};
    };
    class Epoch_SapperB_F : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
			{"Toxicity",20,1},
            {"Soiled",20,1}
		};
    };

    class I_UAV_01_F : Default {
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
			{"Energy",20,1}
		};
    };
    class Epoch_Female_F : Default {
        interactMode = 2;
    };
    class Epoch_Male_F : Default {
        interactMode = 2;
    };
    class C_man_1 : Default {
        interactMode = 2;
    };
    class SapperHead_SIM_EPOCH : Default {
        interactMode = 0;
        interactAttributes[] = {
            {"Soiled",1}
		};
    };
    class SapperCorpse_SIM_EPOCH : Default {
        interactMode = 0;
        interactAttributes[] = {
            {"Soiled",1}
		};
    };

    class Snake_random_EPOCH : Default {
        interactMode = 3;
        distance = 3;
        toxicChance = 0.2;
        bloodpChance = 1;
        fatigueChance = 0.5;
        bleedAmount = 30;
        bloodpAmount = 3;
        soundEffect[] = {"snake_bite0"};
        canSee = "!(lineIntersects[eyePos _unit, aimPos _target, _unit, _target])";
        ppEffect = 0;
        aliveState = 0;
        interactAttributes[] = {
			{"Toxicity",20,1},
            {"Soiled",1}
		};
    };
    class Snake2_random_EPOCH : Default {
        interactMode = 3;
        distance = 3;
        toxicChance = 0.1;
        bloodpChance = 1;
        fatigueChance = 0.5;
        bleedAmount = 30;
        bloodpAmount = 3;
        soundEffect[] = {"snake_bite0"};
        canSee = "!(lineIntersects[eyePos _unit, aimPos _target, _unit, _target])";
        ppEffect = 0;
        aliveState = 0;
        interactAttributes[] = {
			{"Toxicity",10,1},
            {"Soiled",1}
		};
    };
    class GreatWhite_F : Default {
        interactMode = 3;
        distance = 6;
        toxicChance = 0;
        bleedChance = 1;
        bloodpChance = 1;
        fatigueChance = 1;
        bleedAmount = 100;
        bloodpAmount = 3;
        canSee = "true";
        ppEffect = 0;
        aliveState = 1;
        interactAttributes[] = {};
    };
    class SmokeShellCustom : Default {
        distance = 6;
        toxicChance = 1;
        bleedChance = 0;
        bloodpChance = 1;
        fatigueChance = 1;
        bleedAmount = 0;
        bloodpAmount = 3;
        canSee = "true";
        ppEffect = 0;
    };
    class Epoch_Cloak_F : Default {
        distance = 30;
        toxicChance = 0;
        bloodpChance = 0.9;
        fatigueChance = 0.5;
        bleedAmount = 66;
        bloodpAmount = 3;
        soundEffect[] = {"cultist_nearby"};
        canSee = "!(lineIntersects[eyePos _unit, aimPos _target, _unit, _target])";
        ppEffect = 1;
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
			{"Toxicity",20,1},
            {"Soiled",20,1}
		};
    };
    class EPOCH_RyanZombie_1 : Default {
        distance = 3;
        toxicChance = 0.1;
        bloodpChance = 0.9;
        fatigueChance = 0.4;
        bleedAmount = 30;
        bloodpAmount = 3;
        soundEffect[] = {{"ryanzombies\sounds\attack1.ogg",400}, {"ryanzombies\sounds\attack2.ogg",400}, {"ryanzombies\sounds\attack3.ogg",400}, {"ryanzombies\sounds\attack4.ogg",400}, {"ryanzombies\sounds\attack5.ogg",400}};
        soundEffectGlobal = 1;
        animationEffect[] = {"AwopPercMstpSgthWnonDnon_throw"};
        animationEffectGlobal = 1;
        canSee = "!(lineIntersects[eyePos _unit, aimPos _target, _unit, _target])";
        ppEffect = 0;
        interactMode = 3;
        aliveState = 1;
        interactAttributes[] = {
            {"Toxicity",5,1},
            {"Soiled",10,1}
        };
    };
    class EPOCH_RyanZombie_2 : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_3 : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_4 : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_5 : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_1_C : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_2_C : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_3_C : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_4_C : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_5_C : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_1_Sp : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_2_Sp : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_3_Sp : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_4_Sp : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_5_Sp : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_1_B : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_2_B : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_3_B : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_4_B : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_5_B : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_1_W : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_2_W : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_3_W : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_4_W : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_5_W : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_1_M : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_2_M : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_3_M : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_4_M : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_5_M : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_1_S : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_2_S : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_3_S : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_4_S : EPOCH_RyanZombie_1 {};
    class EPOCH_RyanZombie_5_S : EPOCH_RyanZombie_1 {};

};
