//
#ifndef _TtC4Grok13GrokAPIClient_h
#define _TtC4Grok13GrokAPIClient_h
@import Foundation;

@class Grok.GrokEventScriber ?, Grok0A13Authenticable_pSgXw, _$s10Foundation11JSONEncoderCMn, _$sSd, _$sSo30TFSTwitterAPIUserAgentProviderC, _TtCs12_SwiftObject;

@interface Grok.GrokAPIClient : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.JSONEncoder jsonEncoder;
    Grok.GrokEventScriber ? eventSubscriber;
    Swift.Double initialTokenTimeout;
    Swift.Double streamTokenTimeout;
    Grok0A13Authenticable_pSgXw authenticationClient;
    __C.TFSTwitterAPIUserAgentProvider userAgentProvider;
}

@end

#endif /* _TtC4Grok13GrokAPIClient_h */
