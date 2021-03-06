//
//  UserDefaults.h
//  AwesomeBall
//
//  Created by Brian Pratt on 3/17/09.
//  Copyright 2009-2013 Jonathan Johnson and Brian Pratt. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
//
//  - Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
//  - Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer
//    in the documentation and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
//  BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
//  SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
//  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
//  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//
//  UserDefaults holds settings that are shared between the Awesome Ball classes
//  and/or that are meant to persist across sessions. The calls to
//  [NSUserDefaults standardUserDefaults] are to the standard user settings 
//  class provided by Apple. The settings are stored in a file in the App's
//  Documents directory and the file persists across updates to the App.

#import <Foundation/Foundation.h>


@interface UserDefaults : NSObject {

}

+ (BOOL) forceSynchronization;

// Bounce Count
+ (NSUInteger) totalBounceCount;
+ (NSString*) totalBounceCountString;
+ (void) addToTotalBounceCount: (NSUInteger) bounceCount;
+ (void) resetTotalBounceCount;

// User Settings
+ (BOOL) cameraFollowsBallChanged;
+ (void) setCameraFollowsBallChanged: (BOOL) cameraFollowsBallChanged;
+ (BOOL) cameraFollowsBall;
+ (void) setCameraFollowsBall: (BOOL) cameraShouldFollowBall;
+ (NSString*) highScoresUserName;
+ (void) setHighScoresUsername: (NSString*) newHighScoresUsername;
+ (BOOL) hideStatusBar;
+ (void) setHideStatusBar: (BOOL) shouldHideStatusBar;

// Easter Egg Unlocking
+ (BOOL) easterEggUnlockedArrayChanged;
+ (void) setEasterEggUnlockedArrayChanged: (BOOL) setEasterEggUnlockedArrayChanged;
+ (NSMutableArray*) easterEggUnlockedArray;
+ (BOOL) easterEggUnlocked: (unsigned) easterEggIndex;
+ (BOOL) setEasterEggUnlocked: (BOOL) unlocked forEgg: (unsigned) easterEggIndex;
+ (BOOL) setEasterEggUnlockedArray: (NSArray*) easterEggUnlockedArray;

// Current Ball
+ (BOOL) ballTypeChanged;
+ (void) setBallTypeChanged: (BOOL) ballTypeChanged;
+ (unsigned) ballIndex;
+ (void) setBallIndex: (unsigned) newBallIndex;

// Custom Ball
+ (BOOL) customBallParametersChanged;
+ (void) setCustomBallParametersChanged: (BOOL) customBallParametersChanged;
+ (float) customBallRadius;
+ (void) setCustomBallRadius: (float) newCustomBallRadius;
+ (float) customBallMass;
+ (void) setCustomBallMass: (float) newCustomBallMass;
+ (float) customBallBounce;
+ (void) setCustomBallBounce: (float) newCustomBallBounce;
+ (void) saveCustomBallParameters;
+ (BOOL) shouldUseCustomBallIndex;
+ (void) setShouldUseCustomBallIndex: (BOOL) shoudUseCustomBallIndex;
+ (unsigned) customBallIndex;
+ (void) setCustomBallIndex: (unsigned) newCustomBallIndex;

// Custom images
+ (BOOL) customBallImageChanged;
+ (void) setCustomBallImageChanged: (BOOL) customBallImageChanged;
+ (UIImage*) customBallImage;
+ (void) setCustomBallImage: (UIImage*) newCustomBallImage;
+ (void) removeCustomBallImage;
+ (BOOL) customWallImagesChanged;
+ (void) setCustomWallImagesChanged: (BOOL) customWallImagesChanged;
+ (UIImage*) customShortWallImage;
+ (void) setCustomShortWallImage: (UIImage*) newCustomShortWallImage;
+ (void) removeCustomShortWallImage;
+ (UIImage*) customLongWallImage;
+ (void) setCustomLongWallImage: (UIImage*) newCustomLongWallImage;
+ (void) removeCustomLongWallImage;
+ (BOOL) customFloorImageChanged;
+ (void) setCustomFloorImageChanged: (BOOL) customFloorImageChanged;
+ (UIImage*) customFloorImage;
+ (void) setCustomFloorImage: (UIImage*) newCustomFloorImage;
+ (void) removeCustomFloorImage;

// Hi-Res Graphics
+ (BOOL) enableHiResGraphicsChanged;
+ (void) setEnableHiResGraphicsChanged: (BOOL) setEnableHiResGraphicsChanged;
+ (BOOL) enableHiResGraphics;
+ (void) setEnableHiResGraphics: (BOOL) enableHiResGraphics;

@end
