//
#ifndef T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentViewLayoutDelegate_h
#define T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentViewLayoutDelegate : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (struct CGSize { double x0; double x1; })_t1_subtitleTextViewSizeForAvailableWidth:(double)width model:(id)model;
- (id)_t1_attributedSubtitleTextModelForModel:(id)model;
- (struct CGSize { double x0; double x1; })_t1_titleTextViewSizeForAvailableWidth:(double)width model:(id)model;
- (id)_t1_attributedTitleTextModelForModel:(id)model;
- (void)layoutSubviewsForLayoutableView:(id)view;

@end

#endif /* T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentViewLayoutDelegate_h */
