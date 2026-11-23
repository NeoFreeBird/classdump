//
#ifndef T1UnifiedCardGrokShareDetailsComponentViewLayoutDelegate_h
#define T1UnifiedCardGrokShareDetailsComponentViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject, TFNTwitterAccount;

@interface T1UnifiedCardGrokShareDetailsComponentViewLayoutDelegate : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate> // (Swift)

@property (nonatomic, retain) TFNTwitterAccount *account;

/* instance methods */
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* T1UnifiedCardGrokShareDetailsComponentViewLayoutDelegate_h */
