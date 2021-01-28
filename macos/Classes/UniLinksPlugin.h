#import <FlutterMacOS/FlutterMacOS.h>

NS_ASSUME_NONNULL_BEGIN

@interface UniLinksPlugin : NSObject <FlutterPlugin>
+ (instancetype)sharedInstance;
- (BOOL)application:(NSApplication *)application
    continue:(NSUserActivity *)userActivity
      restorationHandler:(void (^)(NSArray<id<NSUserActivityRestoring>>*restorableObjects))restorationHandler;
@end

NS_ASSUME_NONNULL_END
