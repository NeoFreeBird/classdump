//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
