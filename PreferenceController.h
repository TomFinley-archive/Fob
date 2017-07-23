/* Copyright � 2003, Leaky Puppy Software, Net Monkey Inc.

This file is part of Fob.

Fob is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

Fob is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with Fob; if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

//  PreferenceController.h
//  Fob
//
//  Created by Thomas Finley on Sat Jan 18 2003.
//  Copyright (c) 2003 Leaky Puppy Software, for Net Monkey Inc. All rights reserved.
//  This program is distributed under the terms of the GNU General Public License.

#import <Cocoa/Cocoa.h>
#import "prefs.h"

@interface PreferenceController : NSObject {
    IBOutlet NSButton *confirmDeleteCheckbox;
    IBOutlet NSButton *keepWindowOpenCheckbox;
    IBOutlet NSTextField *feedbackLabel;
    IBOutlet NSTextField *bounceLabel;
    IBOutlet NSSlider *feedbackSlider;
    IBOutlet NSSlider *bounceSlider;
    IBOutlet NSWindow *preferenceWindow;
    IBOutlet NSWindow *mainWindow;

    // Stored keys, in the event of a cancel on the sheet.
    BOOL storedConfirmDelete;
    BOOL storedKeepWindowOpen;
    FeedbackLevel storedFeedbackLevel;
    BounceLevel storedBounceLevel;
}
- (void)displayPreferences;
- (IBAction)changeConfirmDeletions:(id)sender;
- (IBAction)changeKeepOpen:(id)sender;
- (IBAction)changeFeedback:(id)sender;
- (IBAction)changeBounce:(id)sender;
- (IBAction)endSheet:(id)sender;
@end