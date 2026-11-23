//
#ifndef MFMailComposeViewController_T1EmailComposer_h
#define MFMailComposeViewController_T1EmailComposer_h
@import Foundation;

#include "MFMailComposeViewControllerDelegate-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSArray, NSObject, NSString, TFSTwitterScribeContext;

@interface MFMailComposeViewController (T1EmailComposer)

/* instance methods */
- (void)setT1_composerController:(id)controller;
- (id)t1_composerController;

@end

#endif /* MFMailComposeViewController_T1EmailComposer_h */
