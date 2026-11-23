//
#ifndef _TtC4Grok27GrokConnectorOAuthCallbacks_h
#define _TtC4Grok27GrokConnectorOAuthCallbacks_h
@import Foundation;

@class NSObject, _$sSDySS -> _$ss6ResultOMn _$s10Foundation3URLVMn _$ss5ErrorMp _$sGScMYcc ->;

@interface Grok.GrokConnectorOAuthCallbacks : NSObject { // (Swift)
    /* instance variables */
    Swift.Dictionary empty-list Swift.String -> nominal type descriptor for Swift.Result nominal type descriptor for Foundation.URL protocol descriptor for Swift.Error _$sGScMYcc -> handlersByNonce;
}

/* class methods */
+ (_Bool)claimCallbackWithNonce:(id)nonce code:(id)code state:(id)state error:(id)error;

/* instance methods */
- (id)init;

@end

#endif /* _TtC4Grok27GrokConnectorOAuthCallbacks_h */
