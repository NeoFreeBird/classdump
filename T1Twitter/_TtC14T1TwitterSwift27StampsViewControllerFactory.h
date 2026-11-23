//
#ifndef _TtC14T1TwitterSwift27StampsViewControllerFactory_h
#define _TtC14T1TwitterSwift27StampsViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1TwitterSwift.StampsViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)makeCollectionDetailViewControllerWithAccountID:(id)id actionService:(id)service modelContext:(id)context imagePipeline:(id)pipeline collectionID:(id)id stampID:(id)id;
+ (id)makeGalleryViewControllerWithAccountID:(id)id actionService:(id)service modelContext:(id)context imagePipeline:(id)pipeline;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift27StampsViewControllerFactory_h */
