#pragma once

// RALT, not LALT: LALT is the umlaut/shortcut modifier (see the mod-morphs in
// the keymap). Hyper must not carry it, or every umlaut morph would fire under
// Hyper. Hammerspoon matches generic "alt", so both sides work there.
#define HYPER LC(LS(LG(RALT)))
#define EMOJI LG(LC(SPACE))
#define PASSWORD LC(LS(P))

// Macro for > that releases shift first (used in mod-morph combos)
#define MACRO_GT m_gt
