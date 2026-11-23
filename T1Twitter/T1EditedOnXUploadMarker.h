//
#ifndef T1EditedOnXUploadMarker_h
#define T1EditedOnXUploadMarker_h
@import Foundation;

@class NSObject;

@interface T1EditedOnXUploadMarker : NSObject // (Swift)

/* class methods */
+ (void)markPhotoAsset:(id)asset editedWithResult:(id)result account:(id)account;
+ (void)markVideoAsset:(id)asset account:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1EditedOnXUploadMarker_h */
