//
//  vp-youku.h
//  vp-youku
//
//  Created by TYPCN on 2015/9/20.
//  Copyright © 2015 TYPCN. All rights reserved.
//

#ifndef vp_youku_h
#define vp_youku_h

#import <Cocoa/Cocoa.h>
#import <VPPlugin/VPPlugin.h>

@interface youku : VP_Plugin

// trigger on load , version is program build number ( eg: 206 )
- (bool)load:(int)version;

// trigger on unload , do cleanup
- (bool)unload;

// trigger when event from javascript , return true or false
- (bool)canHandleEvent:(NSString *)eventName;

// trigger when event from javascript , return video url to play , reutrn NULL won't do anything
- (NSString *)processEvent:(NSString *)eventName :(NSString *)eventData;

// trigger when user click "settings"
- (void)openSettings;

@end


#endif /* vp_youku_h */
