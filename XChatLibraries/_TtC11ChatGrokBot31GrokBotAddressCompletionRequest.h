//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot31GrokBotAddressCompletionRequest_h
#define _TtC11ChatGrokBot31GrokBotAddressCompletionRequest_h
@import Foundation;

#include "MKLocalSearchCompleterDelegate-Protocol.h"

@class NSObject, _$sSS, _$sSaySo23MKLocalSearchCompletionCG, _$sScCyyt _$ss5NeverOMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo22MKLocalSearchCompleterC;

@interface ChatGrokBot.GrokBotAddressCompletionRequest : NSObject <MKLocalSearchCompleterDelegate> { // (Swift)
    /* instance variables */
    __C.MKLocalSearchCompleter completer;
    Swift.String query;
    Swift.CheckedContinuation empty-list () nominal type descriptor for Swift.Never ? continuation;
    [__C.MKLocalSearchCompletion] latest;
    [__C.MKLocalSearchCompletion] results;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? settleTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? timeoutTask;
}

/* instance methods */
- (void)completerDidUpdateResults:(id)results;
- (void)completer:(id)completer didFailWithError:(id)error;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot31GrokBotAddressCompletionRequest_h */
