//
#ifndef TCRComposeTextViewDelegate_h
#define TCRComposeTextViewDelegate_h
@import Foundation;

#include "T1ComposeViewController.h"
#include "TCRComposeTextViewDelegate-Protocol.h"

@class NSString, TCRComposeRTLTextViewDelegate;

@interface TCRComposeTextViewDelegate : TCRComposeRTLTextViewDelegate <TCRComposeTextViewDelegate> {
    /* instance variables */
    T1ComposeViewController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithComposeController:(id)controller;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
- (void)textViewDidChangeSelection:(id)selection;
- (void)textViewDidChange:(id)change;
- (_Bool)canPerformPasteWithSender:(id)sender;
- (_Bool)performPasteWithSender:(id)sender;

@end

#endif /* TCRComposeTextViewDelegate_h */
