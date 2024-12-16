// Game-Db Source/Server/game/src/char_skill.cpp
// Ara - Search

	if (false == bCanUseHorseSkill && true == IsRiding())
		return BATTLE_NONE;

	if (IsPolymorphed())
		return BATTLE_NONE;

	if (g_bSkillDisable)
		return BATTLE_NONE;

	CSkillProto* pkSk = CSkillManager::instance().Get(dwVnum);

	if (!pkSk)
		return BATTLE_NONE;

	if (bCanUseHorseSkill && pkSk->dwType != SKILL_TYPE_HORSE)
		return BATTLE_NONE;

	if (!bCanUseHorseSkill && pkSk->dwType == SKILL_TYPE_HORSE)
		return BATTLE_NONE;

// Degistir - replace

	if(dwVnum!=SKILL_MUYEONG)
	{
		if (false == bCanUseHorseSkill && true == IsRiding())
		{
			return BATTLE_NONE;
		}
	}

	if (IsPolymorphed())
	{
		return BATTLE_NONE;
	}

	if (g_bSkillDisable)
	{
		return BATTLE_NONE;
	}

	CSkillProto* pkSk = CSkillManager::instance().Get(dwVnum);

	if (!pkSk)
	{
		return BATTLE_NONE;
	}

	if(dwVnum!=SKILL_MUYEONG)
	{
		if (bCanUseHorseSkill && pkSk->dwType != SKILL_TYPE_HORSE)
		{
			return BATTLE_NONE;
		}

		if (!bCanUseHorseSkill && pkSk->dwType == SKILL_TYPE_HORSE)
		{
			return BATTLE_NONE;
		}
	}