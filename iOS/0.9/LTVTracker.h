//
//  LTVTracker.h
//  LTVClient
//
//  Created by Hugo Troche on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

enum {
    AdMob = 0,
    iAD,
    iAP,
    GREYSTRIPE_ENUM,
    BURSTLY,
    Wi,
    tapjoy,
    inneractive,
    inmobi,
    milennial,
    facebook,
    social,
    flurry
};
typedef int AdNetwork;


@interface LTVTracker : NSObject {
    NSString *secretKey;
    BOOL debugging;
}

@property (nonatomic, retain) NSString *secretKey;
@property (nonatomic) BOOL debugging;

+ (LTVTracker *) getLTVTracker;

- (void) track;
- (BOOL) isAdNetworkAvailable:(AdNetwork) adNetwork;
- (void) swizzleMethods;

- (void) trackBurstly;
- (BOOL) addCustomMethod:(SEL) sel toClass:(Class) toCls fromClass:(Class) fromCls;
- (void) addCustomClassMethod:(SEL) sel toClass:(NSString *) toClsString fromClass:(Class) fromCls;

- (void) trackActivation:(NSString *) label;

@end
