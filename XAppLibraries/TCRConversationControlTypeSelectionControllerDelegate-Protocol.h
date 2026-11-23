//
#ifndef TCRConversationControlTypeSelectionControllerDelegate_Protocol_h
#define TCRConversationControlTypeSelectionControllerDelegate_Protocol_h
@import Foundation;

#include "TCRConversationControlSelectionCellContentProvider-Protocol.h"

@class NSArray;

@protocol TCRConversationControlTypeSelectionControllerDelegate <TCRConversationControlSelectionCellContentProvider>

@required

@property (nonatomic, readonly) _Bool shouldDelaySelectionAction;
@property (nonatomic, readonly) NSArray *currentRegionCodes;

/* required instance methods */
- (void)conversationControlOptionsWereSelectedWithTypes:(id)types regionCodes:(id)codes;
- (void)conversationControlOptionsWereSelectedWithTypes:(id)types regionCodes:(id)codes;

@optional

@end

#endif /* TCRConversationControlTypeSelectionControllerDelegate_Protocol_h */
