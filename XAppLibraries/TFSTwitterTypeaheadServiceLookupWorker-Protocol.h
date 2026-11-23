//
#ifndef TFSTwitterTypeaheadServiceLookupWorker_Protocol_h
#define TFSTwitterTypeaheadServiceLookupWorker_Protocol_h
@import Foundation;

@protocol TFSTwitterTypeaheadServiceLookupWorker

@required

/* required instance methods */
- (void)startWithRequest:(id)request source:(unsigned long long)source completion:(id /* block */)completion;

@optional

@end

#endif /* TFSTwitterTypeaheadServiceLookupWorker_Protocol_h */
