Showcase: https://streamable.com/hkxyuz

Somehow I managed to break the renderer, so the world is not correctly rendering from the camera. As it was not an important detail in this assignment I did not try to fix it

Design choices:
I decided to work in a simplistic minimalist style, because I decided not to use any external assets or textures. All effects are either animations or materials created by me (for example, button shine on hover or health bar)

Main menu:
Start button doesn't change the level as i didnt think that is necessary, just changes widgets

Settings button slides out the settings menu that includes both resolution change and volume slider. Dropdown used is a custom made dropdown i made for this project, as it was simpler then modifying and styling the built in dropdown (i was able to use my master button, that already was styled and animated). Unfortunately its not fully functional, and is made especially for this one use-case.

Exit exits the game.

HUD:
On the top left there is a health bar. I went with a more interesting approach with a “jar” like appearance, where I used materials to simulate waves. There is also animation on damage, and idle animation. Under it there are 2 buttons, one damages the player by 10% and other one opens the inventory

In the middle of the screen, there is a time counter that shows seconds and minutes in MM:SS format. On the middle bottom there is a button that spawns a ball in front of the camera.

On the right side is the score, with a counter on top and a button underneath to add +1 to the score

Inventory:
Inventory consists of 2 parts, left side with all items listed (no images are included in the project so the buttons have a white box where item image could go) and on the right side the item details. If you click on any of the items in on the left side, its details are represented on the right details panel, where you also can click a button to use that item. InventoryItem class is written in cpp, as it was imo a tidier way of doing it. Currently there is no lost of inventory items in code, but with this class it would be simple to add dynamically changing inventory.
Back button on the right side closes the inventory.
