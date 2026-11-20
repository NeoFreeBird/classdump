//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainGifPickerRepository_Protocol_h
#define Subsystem_ios_iosArm64_mainGifPickerRepository_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainGifPickerRepository

@required

/* required instance methods */
- (void)getCategoriesImageFormat:(id)format product:(id)product completionHandler:(id /* block */)handler;
- (void)getCategoriesImageFormat:(id)format product:(id)product completionHandler:(id /* block */)handler;
- (void)getMediaForCategoryCategoryName:(id)name imageFormat:(id)format product:(id)product completionHandler:(id /* block */)handler;
- (void)getMediaForCategoryCategoryName:(id)name imageFormat:(id)format product:(id)product completionHandler:(id /* block */)handler;
- (void)getTrendingGifsImageFormat:(id)format product:(id)product completionHandler:(id /* block */)handler;
- (void)getTrendingGifsImageFormat:(id)format product:(id)product completionHandler:(id /* block */)handler;
- (void)searchForGifsName:(id)name imageFormat:(id)format product:(id)product completionHandler:(id /* block */)handler;
- (void)searchForGifsName:(id)name imageFormat:(id)format product:(id)product completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainGifPickerRepository_Protocol_h */
