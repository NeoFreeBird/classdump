//
#ifndef PTVImageLoader_h
#define PTVImageLoader_h
@import Foundation;

#include "PTVImageLoaderDelegate-Protocol.h"
#include "PTVImageLoaderSource-Protocol.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSObject, NSString, UIImage;

@interface PTVImageLoader : NSObject <PTVWorkClientDelegate>

@property (weak, nonatomic) id <PTVImageLoaderDelegate> delegate;
@property (retain, nonatomic) id <PTVImageLoaderSource> source;
@property (readonly, nonatomic) PTVWorkClient *workClient;
@property (readonly, nonatomic) _Bool canLoadFromNetwork;
@property (nonatomic) long long cachePolicy;
@property (nonatomic) unsigned long long protectionPolicy;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long state;
@property (nonatomic) _Bool clearsImageWhenSourceChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)transitionToState:(long long)state withResult:(id)result;
- (void)updateSource:(id)source state:(long long)state image:(id)image;
- (void)willChangeSourceTo:(id)to;
- (void)didChangeSourceFrom:(id)from;
- (void)willChangeImageTo:(id)to;
- (void)didChangeImageFrom:(id)from;
- (void)willChangeStateTo:(long long)to;
- (void)didChangeStateFrom:(long long)from;
- (void)load;
- (void)reloadIfContextHasChanged;
- (id)context;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;

@end

#endif /* PTVImageLoader_h */
