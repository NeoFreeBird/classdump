//
#ifndef TAVSessionPreparationResult_h
#define TAVSessionPreparationResult_h
@import Foundation;

@class NSArray, NSError, NSObject;

@interface TAVSessionPreparationResult : NSObject

@property (readonly, copy, nonatomic) NSArray *playlistItems;
@property (readonly, copy, nonatomic) NSArray *observers;
@property (readonly, copy, nonatomic) NSError *error;

/* instance methods */
- (id)initWithPlaylistItems:(id)items observers:(id)observers error:(id)error;
- (id)init;

@end

#endif /* TAVSessionPreparationResult_h */
