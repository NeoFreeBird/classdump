//
#ifndef _TtC14T1TwitterSwiftP33_972801DA6CA0A070ADC638F18B1941E348UnifiedCardJobDetailsComponentViewLayoutDelegate_h
#define _TtC14T1TwitterSwiftP33_972801DA6CA0A070ADC638F18B1941E348UnifiedCardJobDetailsComponentViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.(UnifiedCardJobDetailsComponentViewLayoutDelegate in _972801DA6CA0A070ADC638F18B1941E3) : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate> // (Swift)

/* instance methods */
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_972801DA6CA0A070ADC638F18B1941E348UnifiedCardJobDetailsComponentViewLayoutDelegate_h */
