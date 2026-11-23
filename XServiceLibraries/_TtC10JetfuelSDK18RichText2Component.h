//
#ifndef _TtC10JetfuelSDK18RichText2Component_h
#define _TtC10JetfuelSDK18RichText2Component_h
@import Foundation;

#include "UIPopoverPresentationControllerDelegate-Protocol.h"

@class JetfuelSDK.ViewContext, NSObject;

@interface JetfuelSDK.RichText2Component : NSObject <UIPopoverPresentationControllerDelegate> { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
}

/* instance methods */
- (long long)adaptivePresentationStyleForPresentationController:(id)controller;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK18RichText2Component_h */
