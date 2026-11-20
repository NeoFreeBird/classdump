//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCAppStoreDestinationHandlerHelper_Protocol_h
#define TUCAppStoreDestinationHandlerHelper_Protocol_h
@import Foundation;

@protocol TUCAppStoreDestinationHandlerHelper

@required

/* required instance methods */
- (void)openAppStoreWithAppStoreDataEntry:(id)entry context:(id)context completion:(id /* block */)completion;
- (void)openAppStoreWithDockedMediaWithAppStoreDataEntry:(id)entry mediaEntity:(id)entity context:(id)context completion:(id /* block */)completion;

@optional

@end

#endif /* TUCAppStoreDestinationHandlerHelper_Protocol_h */
