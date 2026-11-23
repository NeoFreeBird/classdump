//
#ifndef _TtC8XJetfuel23XInputPasskeyComponent2_h
#define _TtC8XJetfuel23XInputPasskeyComponent2_h
@import Foundation;

@class JetfuelSDK.JetfuelFormController, JetfuelSDK.ViewContext, NSObject, XJetfuel.XInputPasskeyComponent2.PasskeyState, XJetfuel.XInputPasskeyComponent2.Props ?;

@interface XJetfuel.XInputPasskeyComponent2 : NSObject { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    XJetfuel.XInputPasskeyComponent2.PasskeyState state;
    XJetfuel.XInputPasskeyComponent2.Props ? props;
    JetfuelSDK.JetfuelFormController formController;
}

/* instance methods */
- (void)viewTapped:(id)tapped;
- (id)init;

@end

#endif /* _TtC8XJetfuel23XInputPasskeyComponent2_h */
