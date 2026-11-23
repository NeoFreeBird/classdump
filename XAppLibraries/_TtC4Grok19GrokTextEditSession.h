//
#ifndef _TtC4Grok19GrokTextEditSession_h
#define _TtC4Grok19GrokTextEditSession_h
@import Foundation;

@class Grok.GrokAccountLinkEntryGate, Grok.GrokActiveConvoViewModel, Grok.GrokDelegate, Grok.GrokTextEditReplyTracker ?, _$s7Combine18PassthroughSubjectCMn Grok.GrokTextEditSession.Reply _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _TtCs12_SwiftObject;

@interface Grok.GrokTextEditSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokActiveConvoViewModel convoViewModel;
    Grok.GrokDelegate retainedHost;
    nominal type descriptor for Combine.PassthroughSubject Grok.GrokTextEditSession.Reply nominal type descriptor for Swift.Never replySubject;
    Grok.GrokAccountLinkEntryGate accountLinkEntryGate;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Grok.GrokTextEditReplyTracker ? replyTracker;
    Swift.Int sendGeneration;
}

@end

#endif /* _TtC4Grok19GrokTextEditSession_h */
