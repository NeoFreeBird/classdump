//
#ifndef UITextPasteDelegate_Protocol_h
#define UITextPasteDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UITextPasteDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)textPasteConfigurationSupporting:(id)supporting transformPasteItem:(id)item;
- (void)textPasteConfigurationSupporting:(id)supporting transformPasteItem:(id)item;
- (id)textPasteConfigurationSupporting:(id)supporting combineItemAttributedStrings:(id)strings forRange:(id)range;
- (id)textPasteConfigurationSupporting:(id)supporting combineItemAttributedStrings:(id)strings forRange:(id)range;
- (id)textPasteConfigurationSupporting:(id)supporting performPasteOfAttributedString:(id)string toRange:(id)range;
- (id)textPasteConfigurationSupporting:(id)supporting performPasteOfAttributedString:(id)string toRange:(id)range;
- (_Bool)textPasteConfigurationSupporting:(id)supporting shouldAnimatePasteOfAttributedString:(id)string toRange:(id)range;
- (_Bool)textPasteConfigurationSupporting:(id)supporting shouldAnimatePasteOfAttributedString:(id)string toRange:(id)range;

@end

#endif /* UITextPasteDelegate_Protocol_h */
