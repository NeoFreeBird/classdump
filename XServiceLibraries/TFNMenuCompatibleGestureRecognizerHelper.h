//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuCompatibleGestureRecognizerHelper_h
#define TFNMenuCompatibleGestureRecognizerHelper_h
@import Foundation;

#include "TFNMenuCompatibleControl.h"
#include "TFNMenuDisplayEvents-Protocol.h"
#include "TFNMenuSupport-Protocol.h"

@class NSObject, NSSet, NSString, UIEvent, UIGestureRecognizer;

@interface TFNMenuCompatibleGestureRecognizerHelper : NSObject <TFNMenuSupport> {
    /* instance variables */
    UIGestureRecognizer<TFNMenuSupport, TFNMenuDisplayEvents> *_gestureRecognizer;
    TFNMenuCompatibleControl *_control;
    UIEvent *_event;
    NSSet *_touches;
}

@property (readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;
@property (readonly, copy, nonatomic) id /* block */ willDisplayMenuOnPrimaryActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initForGestureRecognizer:(id)recognizer;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)_tfn_clearTouches;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;
- (void)_tfn_populateMenuWithTitle:(id)title actionItems:(id)items;

@end

#endif /* TFNMenuCompatibleGestureRecognizerHelper_h */
