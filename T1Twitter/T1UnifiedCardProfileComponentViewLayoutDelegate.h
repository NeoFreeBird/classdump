//
#ifndef T1UnifiedCardProfileComponentViewLayoutDelegate_h
#define T1UnifiedCardProfileComponentViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount;

@interface T1UnifiedCardProfileComponentViewLayoutDelegate : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_t1_userViewOptionsForAccount:(id)account profileModel:(id)model;

/* instance methods */
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (void)layoutSubviewsForLayoutableView:(id)view;

@end

#endif /* T1UnifiedCardProfileComponentViewLayoutDelegate_h */
