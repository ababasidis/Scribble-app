//
//  ViewController.h
//  Scribble2
//
//  Created by Tom Babasidis on 1/29/16.
//  Copyright © 2016 Athanasios Babasidis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingsViewController.h"

CGPoint lastPoint;
CGFloat red;
CGFloat green;
CGFloat blue;
CGFloat brush;
CGFloat opacity;
BOOL mouseSwiped;

@interface ViewController : UIViewController <SettingsViewControllerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;
- (IBAction)pencilPressed:(id)sender;
- (IBAction)eraserPressed:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)save:(id)sender;
- (IBAction)settings:(id)sender;
- (IBAction)takePhoto:(UIButton *)sender;
- (IBAction)selectPhoto:(UIButton *)sender;

@end

