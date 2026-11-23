//
#ifndef ObjCGrokAnalyzeProperties_h
#define ObjCGrokAnalyzeProperties_h
@import Foundation;

@class NSObject, NSString;

@interface ObjCGrokAnalyzeProperties : NSObject

@property (nonatomic) long long page;
@property (nonatomic) long long element;
@property (readonly, copy, nonatomic) NSString *postURL;
@property (readonly, copy, nonatomic) NSString *postID;
@property (readonly, copy, nonatomic) NSString *followUpPrompt;
@property (readonly, nonatomic) _Bool isAd;
@property (readonly, nonatomic) _Bool prefillOnly;

/* instance methods */
- (id)initWithPage:(long long)page element:(long long)element postURL:(id)url postID:(id)id followUpPrompt:(id)prompt isAd:(_Bool)ad prefillOnly:(_Bool)only;

@end

#endif /* ObjCGrokAnalyzeProperties_h */
