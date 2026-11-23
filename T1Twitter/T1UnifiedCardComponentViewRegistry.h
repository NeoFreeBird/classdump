//
#ifndef T1UnifiedCardComponentViewRegistry_h
#define T1UnifiedCardComponentViewRegistry_h
@import Foundation;

#include "TUCComponentViewRegistry-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, TFSTwitterScribeContext, TIPImagePipeline;

@interface T1UnifiedCardComponentViewRegistry : NSObject <TUCComponentViewRegistry>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) long long displayType;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account displayType:(long long)type imagePipeline:(id)pipeline scribeContext:(id)context;
- (id)registryWithDisplayType:(long long)type;
- (id)viewForComponent:(id)component;
- (id)layoutDelegateForComponent:(id)component;
- (Class)viewClassForComponent:(id)component;
- (id)initializeComponentViewForComponent:(id)component;
- (id /* block */)configurationBlockForComponent:(id)component;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1UnifiedCardComponentViewRegistry_h */
