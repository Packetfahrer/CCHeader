#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIKit.h>
#import <substrate.h>

#define isiOS9Up (kCFCoreFoundationVersionNumber >= 1217.11)
#define isiOS8 (kCFCoreFoundationVersionNumber >= 1129.15 && kCFCoreFoundationVersionNumber < 1217.11)
#define isiOS7 (kCFCoreFoundationVersionNumber > 793.00 && kCFCoreFoundationVersionNumber < 1129.15)

@interface UIColor (Addition)
+ (UIColor *)systemBlueColor;
+ (UIColor *)systemGreenColor;
+ (UIColor *)systemOrangeColor;
+ (UIColor *)systemPinkColor;
+ (UIColor *)systemPurpleColor;
+ (UIColor *)systemRedColor;
+ (UIColor *)systemTealColor;
+ (UIColor *)systemYellowColor;
+ (UIColor *)systemGrayColor;
+ (UIColor *)systemDarkBlueColor;
+ (UIColor *)systemDarkGreenColor;
+ (UIColor *)systemDarkOrangeColor;
+ (UIColor *)systemDarkPinkColor;
+ (UIColor *)systemDarkRedColor;
+ (UIColor *)systemDarkTealColor;
+ (UIColor *)systemDarkYellowColor;
+ (UIColor *)lightGrayColor;
+ (UIColor *)whiteColor;
+ (UIColor *)blackColor;
@end

@interface UIImage (Addition)
+ (UIImage *)kitImageNamed:(NSString *)name;
+ (UIImage *)imageNamed:(NSString *)name inBundle:(NSBundle *)bundle;
- (UIImage *)_flatImageWithColor:(UIColor *)color;
@end

@interface NSUserDefaults (Addition)
- (id)objectForKey:(NSString *)key inDomain:(NSString *)domain;
- (void)setObject:(id)value forKey:(NSString *)key inDomain:(NSString *)domain;
@end

@interface JBBulletinManager : NSObject
+(id)sharedInstance;
-(id)showBulletinWithTitle:(NSString *)title message:(NSString *)message bundleID:(NSString *)bundleID;
-(id)showBulletinWithTitle:(NSString *)title message:(NSString *)message bundleID:(NSString *)bundleID soundPath:(NSString *)soundPath;
-(id)showBulletinWithTitle:(NSString *)title message:(NSString *)message bundleID:(NSString *)bundleID soundID:(int)inSoundID;
-(id)showBulletinWithTitle:(NSString *)title message:(NSString *)message overrideBundleImage:(UIImage *)overridBundleImage;
-(id)showBulletinWithTitle:(NSString *)title message:(NSString *)message overrideBundleImage:(UIImage *)overridBundleImage soundPath:(NSString *)soundPath;
-(id)showBulletinWithTitle:(NSString *)title message:(NSString *)message overridBundleImage:(UIImage *)overridBundleImage soundID:(int)inSoundID;
-(id)showBulletinWithTitle:(NSString *)title message:(NSString *)message bundleID:(NSString *)bundleID hasSound:(BOOL)hasSound soundID:(int)soundID vibrateMode:(int)vibrate soundPath:(NSString *)soundPath attachmentImage:(UIImage *)attachmentImage overrideBundleImage:(UIImage *)overrideBundleImage;
@end